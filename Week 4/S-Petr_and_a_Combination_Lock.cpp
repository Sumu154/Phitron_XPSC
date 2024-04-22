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
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int flag = 0;
    for(int i=0 ; i<(1<<n) ; i++){
        int sum = 0;
        for(int k=0 ; k<n ; k++){
            if(i&(1<<k)){
                sum += a[k];
            }
            else{
                sum -= a[k];
            }
        }

        if(sum%360==0){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
    Faster;
    Solve();
}