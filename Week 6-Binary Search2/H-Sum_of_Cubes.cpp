#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 1e4+5;
map<ll,ll> mp;


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
    ll x;
    cin >> x;
    for(ll i=1 ; i<N ; i++){
        ll need = x-i*i*i;
        //cout << "need: " << need << "\n"
        if(mp.find(need) != mp.end()){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

}

int main()
{
    Faster;
    for(ll i=1 ; i<N ; i++){
        mp[i*i*i]++;
    }

    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}