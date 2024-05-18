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
        vector<vector<int>> a(n+1, vector<int> (n));
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<n ; j++){
                cin >> a[i][j];
            }
        }

        vector<int> p[n+1];
        int val;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<n ; j++){
                val = a[i][j];
                p[val].push_back(j);
            }
        }
        
        for(int i=1 ; i<=n ; i++){
            sort(p[i].begin(), p[i].end());
        }

        vector<int> ans(n+1);
        for(int i=1 ; i<=n ; i++){
            if(p[i][n-2] == n-1){
                if(p[i][0]==n-1){
                    ans[n] = i;
                }
                else{
                    ans[n-1] = i;
                }
            }
            else{
                ans[p[i][n-2]] = i;
            }
        }


        for(int i=1 ; i<=n ; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";  
    }
}