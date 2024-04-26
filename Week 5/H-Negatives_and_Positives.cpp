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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    ll neg = 0;
    ll zero = 0;
    ll sum = 0;
    ll mini = INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(a[i] < 0){
            neg++;
        }
        if(a[i]==0){
            zero++;
        }
        sum += abs(a[i]);
        mini = min(mini, abs(a[i]));
    }

    if(neg%2==1 and zero==0){
        sum -= 2ll*mini;
    }

    cout << sum << "\n";


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