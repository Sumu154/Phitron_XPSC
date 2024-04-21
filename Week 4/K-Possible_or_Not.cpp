#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;



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



void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int andAns = -1;
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        if((a[i]&k) == k){
            andAns &= a[i];
        }
    }
    if(andAns == k){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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