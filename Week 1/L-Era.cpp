#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n+1);
        for(int i=1 ; i<=n ; i++){
            cin >> a[i];
        }

        ll ans = 0;
        for(int i=1 ; i<=n ; i++){
            if(a[i]>i){
                ll temp = ans;
                ans += a[i]-i-temp;
            }
        }
        cout << ans << "\n";
    }
}