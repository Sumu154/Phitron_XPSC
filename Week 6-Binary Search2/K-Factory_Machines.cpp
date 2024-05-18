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

int BinarytoDec(string s)
{
    int k = s.size();
    
    int ans = 0;
    for(int i=0 ; i<k ; i++){
        ans |= (s[i]-'0') << (k-1-i);
    }

    return ans;
}

//*------------------------*//


void Solve()
{
    int n, pd;
    cin >> n >> pd;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    auto ok = [&](ll m){            //mid nibe..mid time e given product banano possible kina 
        ll total = 0;
        for(int i=0 ; i<n ; i++){
            total += (m/a[i]); 
            if(total >= pd){         //mid time e given product banano possible hole 
                return true;
            } 
        }
        return false;
    };


    ll l=1, r=1e18;   //minimum time 1 and maximum time 1e18 hote pare(from constraint)
    ll mid, ans;
    while(l<=r){
        mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }

    cout << ans << "\n";
}

int main()
{
    Faster;
    
Solve();
    
}