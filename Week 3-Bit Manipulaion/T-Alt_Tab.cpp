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

//*------------------------*//



void Solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    unordered_map<string, int> mp;
    string ans;
    for(int i=n-1 ; i>=0 ; i--){
        string temp = a[i];
        if(mp[temp]>0){
            continue;
        }
        mp[temp]++;
        ans += temp.substr(temp.size()-2, 2);
    }
    cout << ans << "\n";


}

int main()
{
    Faster;
    Solve();
    
}