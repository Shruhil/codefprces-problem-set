#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

void coderAnsh(){
    int n;
    cin >> n;

    string s;
    cin >> s;


    if(!(n&1)){
        vi even(26);
        vi odd(26);

        for(int i=0; i<n; ++i){
            int num = s[i] - 'a';
            
            if(!((i+1) & 1))even[num]++;
            else odd[num]++;
        }

        int maxEven = *max_element(even.begin(), even.end());
        int maxOdd = *max_element(odd.begin(), odd.end());

        cout << n - maxEven - maxOdd;
        return;
    }

    else{
        vi beforeOdd(26), beforeEven(26);
        vi afterOdd(26), afterEven(26);
        
        for(int i=0; i<n; ++i){
            int num = s[i] - 'a';
            
            if(!((i+1) & 1))beforeEven[num]++;
            else beforeOdd[num]++;
        }
        
        for(int i=0; i<n; ++i){
            int num = s[i] - 'a';
            
            if(!((i+1) & 1))afterOdd[num]++;
            else afterEven[num]++;
        }

        for(int j=0; j<n; ++j){
            int rem_idx = j;
            int num = s[rem_idx] - 'a';

            if(rem_idx%2){
                afterOdd[num]--
            }

            else{
                afterEven[num]--;
            }

            int maxOdd = 0;
            for(int c=0; c<26; ++c){
                int cnt = beforeOdd[c] + afterEven[c];
                maxOdd = max(cnt, maxOdd);
            }

            for(int c=0; c<26; ++c){
                int cnt = beforeEven[c] + afterOdd[c];
                maxEven = max(cnt, maxEven);
            }

            int ans = INT_MAX;

            ans = min(ans, n - maxOdd - maxEven);

            cout << ans;

            if(rem_idx%2){
                beforeOdd[num]++;
            }

            else{
                beforeEven[num]++;
            }
        }
    }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    cin >> t;

    while(t--){
        coderAnsh();
        cout << endl;
    }

    return 0;
}