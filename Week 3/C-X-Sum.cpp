#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;
int maze[202][202];


ll Solve(int n, int m, int x, int y)
{
    ll ans=0;

    int idx=0;
    while(x-idx>0 and y-idx>0){
        ans += maze[x-idx][y-idx];
        idx++;
    }
    idx=0;
    while(x-idx>0 and y+idx<=m){
        ans += maze[x-idx][y+idx];
        idx++;
    }
    idx=0;
    while(x+idx<=n and y-idx>0){
        ans += maze[x+idx][y-idx];
        idx++;
    }
    idx=0;
    while(x+idx<=n and y+idx<=m){
        ans += maze[x+idx][y+idx];
        idx++;
    }
    //ans += maze[x][y];
    return ans-3*(maze[x][y]);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                cin >> maze[i][j];
            }
        }

        ll ans = 0;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                ans = max(ans, Solve(n,m,i,j));
            }
        }

        cout << ans << "\n";
        memset(maze, 0, sizeof(maze));
    }
}