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
    vector<int> a(n), b(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=0 ; i<n ; i++){
        if(a[i]!=b[i] and a[i]!=b[i]-1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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