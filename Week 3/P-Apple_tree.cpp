#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;
vector<ll> adja_list[N];
vector<ll> leafs;


int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a/gcd(a,b))*b;
}

int countSqrt(int l, int r){
    ll m = ceil(sqrt(l));
    ll n = floor(sqrt(r));
    return n-m+1;
}





void DFS(int src, int par)
{
    bool hasChild = false;
    for(int i: adja_list[src]){
        if(i==par){
            continue;
        }
        hasChild = true;
        DFS(i, src);
        leafs[src] += leafs[i];
    }

    //base case -> jar kono child nai mane leaf node gular jonne 1 set korbe
    if(!hasChild){
        leafs[src] = 1;
    }
}

void Solve()
{
    int n, q;
    cin >> n;
    leafs.assign(n+2,0);
    for(int i=0;i<=n;i++){
   		adja_list[i].clear();
   	}
    
    for(int i=1 ; i<=n-1 ; i++){
        int u, v;
        cin >> u >> v;

        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }

    DFS(1, -1);
    cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;

        ll ans = leafs[x]*leafs[y];
        cout << ans << "\n";
    }

}

int main()
{
    Faster;
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}