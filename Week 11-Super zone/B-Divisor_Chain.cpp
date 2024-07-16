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

/*

11110 -> number of trailing zero=1
tar mane -> 1 no bit e 1 ace which is least significant bit
*/

void Solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    a.push_back(n);
    while(__builtin_popcount(n) > 1){
        ll p = __builtin_ctz(n);     // no of trailing 0s - To get least Significant Bit
        n -= (1<<p);
        a.push_back(n);
    }
    while(n>1){      
        n = n/2;
        a.push_back(n);
    }
    cout << a.size() << "\n";
    for(ll i: a){
        cout << i << " ";
    }cout << "\n";
    
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

