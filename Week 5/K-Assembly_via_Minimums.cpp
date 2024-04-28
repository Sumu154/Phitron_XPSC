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

/*

*/

void Solve()
{
    int n;
    cin >> n;
    int size = (n*(n-1))/2;
    //cout << size << "\n";
    vector<ll> a(size);
    for(int i=0 ; i<size ; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<ll> ans;
    for(int i=0 ; i<size ; i+=n){
        ans.push_back(a[i]);
        n--;
    }
    ans.push_back(a[size-1]);

    for(int i: ans){
        cout << i << " ";
    }
    cout << "\n";

    

   
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