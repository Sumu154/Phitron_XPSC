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
    cin>>n;
    int a = 1;
    int b = 0;
    int count = 0;
    while(a*2 <= n){
        a = a*2;
        count++;
    }
    //cout << count << "\n";
    for(int i=count-1 ; i>=0 ; i--){
        if(n& (1<<i)){                //n er ith bit 1 or 0 eta check korte chacci,,ith bit 1 hole
            b = b | (1<<i);          //b er value ekhn ith bit 1 kore felbo
        }
    }
    cout<< b << " " << a << "\n";

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