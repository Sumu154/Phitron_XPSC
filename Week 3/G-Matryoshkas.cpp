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

        vector<pair<ll,ll>> b;
        sort(a.begin(), a.end(), greater<ll>());

        int i=0, j;
        while(i<n){
            j = i;
            while(i<n and a[i]==a[j]){
                i++;
            }
            b.push_back({a[j], i-j});
        }

        n = b.size();
        int ans = b[0].second;

        for(int i=1 ; i<n ; i++){
            if(b[i].first+1 == b[i-1].first){
                ans += max(b[i].second-b[i-1].second, 0ll);
            }
            else{
                ans += b[i].second;
            }
        }
        cout << ans << "\n"; 

    }
}