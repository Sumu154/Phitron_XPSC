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

int charToInt(char ch)
{
    return ch-'0';
}

//*------------------------*//



void Solve()
{
    int n, k;
    cin >> n >> k;
    //cout << n << k ;
    vector<ll> pos, neg;
    for(int i=0 ; i<n ; i++){
        ll val;
        cin >> val;
        if(val<0){
            neg.push_back(abs(val));
        }
        else{
            pos.push_back(val);
        }
    }

    sort(pos.begin(), pos.end(), greater<ll>());
    sort(neg.begin(), neg.end(), greater<ll>());

    ll ans = 0;
    for(int i=0 ; i<pos.size() ; i+=k){
        ans += pos[i]*2;
    }

    for(int i=0 ; i<neg.size() ; i+=k){
        ans += neg[i]*2;
    }

    ll single = 0;
    if(!pos.empty()){
        single = max(single, pos[0]);
    }
    if(!neg.empty()){
        single = max(single, neg[0]);
    } 

    ans -= single; // Subtract the largest single trip distance
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

/*
* stuff you should look before submission
    * constraint and time limit
    * int overflow
    * special test case (n=0 or n=1 or n=2)
*/