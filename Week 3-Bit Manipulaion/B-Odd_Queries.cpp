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
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1);
        vector<int> pref(n+1);
        for(int i=1 ; i<=n ; i++){
            cin >> a[i];
        }
        int sum = 0;
        for(int i=1 ; i<=n ; i++){
            sum += a[i];
            pref[i] = sum;
        }

        ll total = accumulate(a.begin(), a.end(), 0);
        while(q--){
            ll temp = total;
            ll l,r,k;
            cin >> l >> r >> k;

            temp -= pref[r]-pref[l-1];
            temp += (r-l+1)*k;

            if(temp%2 == 0){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }


        }
    }
}