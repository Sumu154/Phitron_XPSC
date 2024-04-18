#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = (1<<15);
vector<int> allPal;



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


void findPalindrome()
{
    for(int i=0 ; i<N ; i++){
        string s = to_string(i);
        int n = s.size();

        bool ok = true;
        int l=0, r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                ok = false;
                break;
            }
            l++;
            r--;
        }
        if(ok){
            allPal.push_back(i);
        }
    }
}


void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n), cnt(N);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll ans = n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<allPal.size() ; j++){
            int curr = (a[i]^allPal[j]);
            ans += cnt[curr];
        }
    }
    cout << ans/2 << "\n";
}

int main()
{
    Faster;
    int t;
    cin >> t;
    findPalindrome();
    while(t--){
        Solve();
    }
}