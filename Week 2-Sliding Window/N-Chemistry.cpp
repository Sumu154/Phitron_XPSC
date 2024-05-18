#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> freq(26);
        for(int i=0 ; i<n ; i++){
            freq[s[i]-'a']++;
        }

        int odd=0;
        for(int i=0 ; i<26 ; i++){
            if(freq[i]%2 != 0){
                odd++;
            }
        }
        if(odd-1<0){
            odd = 0;
        }
        else{
            odd -= 1;
        }
        
        if(k<=n and k>=odd){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
}