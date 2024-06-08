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


ll countInversion(vector<int> a, int n, int idx)
{
    a[idx] = !a[idx];
    ll zero=0, ans=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]==1){
            ans += zero;
        }
        else{
            zero++;
        }
    }
    return ans;

}

void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    ll ans1 = countInversion(a, n, -1);


    int idx;
    for(int i=0 ; i<n ; i++){
        if(a[i] == 0){
            idx = i;
            break;
        }
    }
    ll ans2 = countInversion(a, n, idx);

    for(int i=n-1 ; i>=0 ; i--){
        if(a[i] == 1){
            idx = i;
            break;
        }
    }
    ll ans3 = countInversion(a, n, idx);
    

    cout << max({ans1, ans2, ans3}) << "\n";

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

