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


int lcm(int a, int b)
{
    return (a/__gcd(a,b))*b;
}

void Solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    
    ll overlap = n/lcm(a,b);
    ll countA = n/a - overlap;
    ll countB = n/b - overlap;
    

    //cout << countA << " " << countB << " " << overlap << "\n";

    ll ans = max(overlap*p, overlap*q)+countA*p+countB*q;
    cout << ans << "\n";

    
}

int main()
{
    Faster;
  
   
    Solve();
    
}

