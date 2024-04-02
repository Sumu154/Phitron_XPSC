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
        vector<ll> a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }

        multiset<ll, greater<ll>> s;
        ll ans = 0;
        for(int i=0 ; i<n ; i++){
            if(a[i]==0){
                if(!s.empty()){
                    ans += *s.begin();
                    s.erase(s.begin());
                }
            }
            else{
                s.insert(a[i]);
            }
        }
        cout << ans << "\n";
    }
}