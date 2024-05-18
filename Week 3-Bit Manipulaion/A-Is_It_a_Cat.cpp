#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        string ans = "";
        for(int i=0 ; i<n ; i++){
            if(tolower(s[i])!=tolower(s[i+1])){
                ans += tolower(s[i]);
            }
        }
        //cout << ans << "\n";
        if(ans == "meow"){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}