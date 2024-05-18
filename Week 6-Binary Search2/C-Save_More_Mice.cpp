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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for(int i=0 ; i<k ; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<ll>());
   

    auto ok =[&](ll mid){
        int catPos = 0;
        for(int i=0 ; i<mid ; i++){
            if(catPos >= a[i]){
                return false;
            }
            catPos += n-a[i];
        }
        return true;     
    };



    ll l=0, r=k;
    ll mid, ans;
    while(l<=r){
        mid = (l+r)/2;
        if(ok(mid)){
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
    Faster;
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}