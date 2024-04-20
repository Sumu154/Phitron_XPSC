#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const ll N = 1e9+3;
vector<ll> powerTwo;


//*-------------------------*//
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

//*------------------------*//


void makeArrayPowerTwo()
{
    int i=0;
    while(1<<i <= N){
        powerTwo.push_back(1<<i);
        i++;
    }
}


void Solve()
{
    ll n;
    cin >> n;

    ll ans = INT_MIN;
    for(int i=0 ; i<powerTwo.size() ; i++){
        if(powerTwo[i] <= n){
            ans = max(ans, powerTwo[i]);
        }
    }
    
    cout << ans-1 << "\n";
}

int main()
{
    Faster;
    int t;
    cin >> t;
    makeArrayPowerTwo();
    while(t--){
        Solve();
    }
}