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

int BinarytoDec(string s){
    int k = s.size();
    int ans = 0;
    for(int i=0 ; i<k ; i++){
        ans |= (s[i]-'0') << (k-1-i);
    }
    return ans;
}

string decToBinary(int n){
    string ans;
    while(n){
        if(n&1){
            ans += '1';
        }
        else{
            ans += '0';
        }
        n >>= 1;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


//*------------------------*//


ll power(ll b, ll p)
{
    ll ans = 1;
    while(p){
        if(p%2==1){
            ans = (ans*b)%MOD;
            p--;
        }
        else{
            b = (b*b)%MOD;
            p /= 2;
        }
    }
    return ans%MOD;
}


void Solve()
{
    ll n, k;
    cin >> n >> k;
    string s = decToBinary(k);
    //cout << s << "\n";

    ll ans = 0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='1'){
            ans += power(n, s.size()-1-i);
            ans %= MOD;
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

