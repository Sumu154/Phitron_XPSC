#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;



//*-------------------------*//
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

ll myPow(ll a, ll b)
{
    ll ans = 1;
    a %= MOD;
    while(b){
        if(b&1){
            ans = (ans*a)%MOD;
        }
        a = (a*a)%MOD;
        b = (b>>1);
    }
    return ans;
}

void Solve()
{
    ll a, b, l;
    cin >> a >> b >> l;

    set<int> s;
    for(int x=0 ; myPow(a,x)<=l ; x++){
        for(int y=0 ; myPow(b,y)<=l ; y++){
            ll ans = myPow(a,x)*myPow(b,y);
            if(l%ans == 0){
                s.insert(l/ans);
            }
        }
    }
     cout << s.size() << "\n";
    
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

