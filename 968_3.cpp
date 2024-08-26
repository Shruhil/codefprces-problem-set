#include<bits/stdc++.h>
using namespace std;

void coderAnsh(){
    int n;
    string s;

    cin >> n >> s;

    map<char,int> freq;
    for(int i=0; i<n; ++i){
        freq[s[i]]++;
    }

    vector<pair<int, char>> v;
    for(auto &it:freq){
        v.push_back({it.second, it.first});
    }

    sort(v.rbegin(), v.rend());
    string temp = "";
    string ans = "";

    int i=v.size()-1;
    int sum = 0;

    for(auto it:v) temp.push_back(it.second);

    while(i>=0){
        int req = v[i].first - sum;

        for(int j=0; j<req; ++j){
            ans+=temp;
        }

        sum+=req;
        temp.pop_back();

        --i;
    }

    cout << ans;

}


int main(){
    int t;
    cin >> t;

    while(t--){
        coderAnsh();
        cout << endl;
    }

    return 0;
}