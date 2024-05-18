#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 24;
int dp[N][N];
string s, t;
int n, m, ans=0;




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

//*------------------------*//

int LCS(int n, int m)
{
    //1.handle base case
    if(n==0 or m==0){
        return 0;
    }

    //2.if current state is already solved,return the solved result
    if(dp[n][m] != -1){
        return dp[n][m];
    }

    LCS(n-1, m);
    LCS(n, m-1);

    //3.calculate the result from smaller sub problem
    if(s[n-1] == t[m-1]){
        dp[n][m] =  LCS(n-1, m-1) + 1;
        ans = max(ans, dp[n][m]);
        return dp[n][m];
    } 
    dp[n][m] = 0;
    return dp[n][m];
}

void Solve()
{
    cin >> s >> t;
    n = s.size();
    m = t.size();

    memset(dp, -1, sizeof(dp));
    LCS(n,m);
    cout << n+m-2*ans << "\n";
    ans = 0;      //eta important,,na korle,,ans vul ashbe update hbe na
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