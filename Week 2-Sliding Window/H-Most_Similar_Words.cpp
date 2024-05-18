#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for(int i=0 ; i<n ; i++){
            cin >> s[i];
        }
    
        ll ans = INT_MAX;
        for(int i=0 ; i<n ; i++){
            ll temp_ans = INT_MAX;
            for(int j=i+1 ; j<n ; j++){
                ll sum = 0;
                for(int k=0 ; k<m ; k++){
                    ll diff = max(s[i][k], s[j][k])-min(s[i][k],s[j][k]);
                    sum += diff;
                }
                temp_ans = min(temp_ans, sum);
            }
            ans = min(ans, temp_ans);
        }
        
        cout << ans << "\n";
    }
}