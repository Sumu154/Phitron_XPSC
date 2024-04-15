#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;

ll Solve(ll n)
{
    if(n==1){
        return 1;
    }
    return n+Solve(n/2);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << Solve(n) << "\n";
    }
}