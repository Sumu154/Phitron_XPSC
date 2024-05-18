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
    int n, a, b;
    cin >> n >> a >> b;
    //cout << n << a << b;


    auto ok = [&](int m){
        //cout << "called\n";
        for(int i=1 ; i<n ; i++){         //i ta -> from cake 1st(a)
            if(min(a/i, b/(n-i))>=m){     //n-i ta -> from cake 2nd(b)
                return true;
            }                               
        }
        return false;
    };

    int l=1, r=101;
    int mid, ans;
    //cout << ok(9) << "\n";
    while(l<=r){
        mid = (l+r)/2;
       // cout << mid << "\n";
        if(ok(mid)){    //mid ta cake min thaka possible kina
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout << ans << "\n";
}

int main()
{
    //Faster;
    
    Solve();
    
}