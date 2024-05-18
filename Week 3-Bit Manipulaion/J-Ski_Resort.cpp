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
        int n, k, temp;
        cin >> n >> k >> temp;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }

        ll ans = 0;
        ll cons = 0;
        for(int i=0 ; i<n ; i++){
            if(a[i]<=temp){
                cons++;
                if(i==n-1 or a[i+1]>temp){
                    if(cons>=k){
                        ll x = cons-k+1ll;
                        ll add = (x*(x+1ll))/2ll;
                        ans += add;
                    }
                    cons = 0;
                } 
            }
        }
        cout << ans << "\n";
    }
}