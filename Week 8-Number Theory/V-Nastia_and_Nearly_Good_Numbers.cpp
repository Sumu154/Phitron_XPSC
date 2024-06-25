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

/*
x+y = z

let, 
z/A*B  x/A   y/A

ekhon, x=A (dhore nibo)

tahole z A*B er gunitok  -> z= 2*A*B
tahole y= z-x 
     =>y= 2*A*B-A 
        = A(2*B-1)  which is divisible by A





*/

void Solve()
{
    ll a, b;
    cin >> a >> b;

    if(b==1){
        cout << "NO\n";
        return;
    }

    ll x = a;
    ll z = 2*a*b;
    ll y = z-x;

    cout << "YES\n";
    cout << x << " " << y << " " << z << "\n";

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

