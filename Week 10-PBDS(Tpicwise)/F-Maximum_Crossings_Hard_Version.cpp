#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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



void Solve()
{
    int n;
    cin >> n;
    vector<ll> a(n+1);
    for(int i=1 ; i<=n ;  i++){
        cin >> a[i];
    }

    pbds<pair<ll,int>> p;
    ll ans=0;
    for(int i=1 ; i<=n ; i++){
        ll k = p.order_of_key({a[i],INT_MIN});         //a[i] er cheye choto value koita ace
        ans += p.size()-k;                           //ekhn jotogula boro or equal value ace oigula add korlam
        p.insert({a[i],i});
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
