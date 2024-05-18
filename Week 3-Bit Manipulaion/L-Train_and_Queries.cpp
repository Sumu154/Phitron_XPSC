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
        int n,q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }

        map<int, pair<int,int>> mp;
        for(int i=0 ; i<n ; i++){
            if(mp.count(a[i])==0){
                mp[a[i]].first = i;
                mp[a[i]].second = i;
            }
            //first hocce ekdom lefter positopn ta..ar second hocce ekdom righter position ta
            else{
                mp[a[i]].second = i;
            }
        }
        while(q--){
            ll u, v;
            cin >> u >> v;
            
            if(!mp.count(u) or !mp.count(v) or mp[u].first>mp[v].second){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }

        }
    }
}