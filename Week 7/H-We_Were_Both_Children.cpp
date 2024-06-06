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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    vector<int> freq(n+2, 0);
    for(int i=0 ; i<n ; i++){
        if(a[i] > n){
            continue;
        }
        freq[a[i]]++;
    }

    ll ans = 0;
    for(int i=1 ; i<=n ; i++){       //1 to n porjonto kothay trap rakhbo oita
        ll trapped = 0;
        for(int x=1 ; x<=sqrt(i) ; x++){      //freq array traverse
            if(i%x == 0){
                trapped += freq[x];
                if(x != sqrt(i)){
                    trapped += freq[i/x];
                }
            }
        }
        ans = max(ans, trapped);
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

/*
* stuff you should look before submission
    * constraint and time limit
    * int overflow
    * special test case (n=0 or n=1 or n=2)
*/





/*
if(i%x == 0){
    trapped += freq[x];
    if(x != sqrt(i)){
        trapped += freq[i/x];
    }
}

in this part -> divisor nice
ex: for 18
1x18
2x9
3x6

so x<=sqrt(18) porjonto jabo and bakigula 18/x kore peye jabo


*/