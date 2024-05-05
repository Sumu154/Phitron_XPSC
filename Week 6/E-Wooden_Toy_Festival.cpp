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

//*------------------------*//



void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());


    auto ok = [&](int mid){
        int j=0, count=1;
        for(int i=0 ; i<n ; i++){
            if(a[i]-a[j] > 2*mid){
                count++;
                j=i;
            }
        }
        return count<=3;
    };

    int l=0, r=1e9;
    int mid, ans=0;
    while(l<=r){
        mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
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