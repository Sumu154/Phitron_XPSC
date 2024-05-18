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
        cin >> n;
        vector<ll> a(n), b(n), c(n);
        vector<pair<ll,ll>> va, vb, vc;
        
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            va.push_back({a[i], i});
        }
        for(int i=0 ; i<n ; i++){
            cin >> b[i];
            vb.push_back({b[i], i});
        }
        for(int i=0 ; i<n ; i++){
            cin >> c[i];
            vc.push_back({c[i], i});
        }

        sort(va.begin(), va.end(), greater<>());
        sort(vb.begin(), vb.end(), greater<>());
        sort(vc.begin(), vc.end(), greater<>());

        ll ans = 0;
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
                for(int k=0 ; k<3 ; k++){
                    if(va[i].second!=vb[j].second and va[i].second!=vc[k].second and vb[j].second!=vc[k].second){
                        ans = max(ans, va[i].first+vb[j].first+vc[k].first);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}