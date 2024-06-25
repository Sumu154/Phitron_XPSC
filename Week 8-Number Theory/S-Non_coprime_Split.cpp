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


ll getprime(ll n)
{
    while(n%2 == 0){
        return 2;
        n = n/2;
    }
    for(ll i=3 ; i*i<=n ; i+=2){
        while(n%i == 0){
            return i;
            n = n/i;
        }
    }
    if(n > 2){
        return n;
    }
    return -1;
}


void Solve()
{
    ll l, r;
    cin >> l >> r;

    if(r <= 3){
        cout << -1 << "\n";
        return;
    }
    if(l < r){
        if(r%2 != 0){
            r--;
        }
        cout << 2 << " " << r-2 << "\n";
        return;
    }
    //l==r
    ll prime = getprime(l);
    if(prime == l){
        cout << -1 << "\n";
    }
    else{
        cout << prime << " " << l-prime << "\n";
    }
    
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

