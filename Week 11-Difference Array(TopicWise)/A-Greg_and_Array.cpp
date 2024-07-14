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
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> a(n);
    vector<vector<ll>> op(m, vector<ll>(3));
    vector<ll> d1(m+1);
    vector<ll> d2(n+1);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i=0 ; i<m ; i++){
        ll l,r,d;
        cin >> l >> r >> d;
        l--;r--;                  //operations ta 0 index e anlam

        op[i][0]=l; op[i][1]=r; op[i][2]=d;
        // d2[l]+=d; d2[r+1]-=d;  ei kaj ta ekhane korbo na
    }
    while(q--){
        ll l,r;
        cin >> l >> r;

        l--;r--;
        d1[l]++; d1[r+1]--;
    }

    //operations er opor difference array 
    for(int i=1 ; i<m ; i++){
        d1[i] += d1[i-1];
    }
    for(int i=0 ; i<m ; i++){
        op[i][2] *= d1[i];
        // cout << op[i][2] << " ";
    }

    //operation er value update kore ekhn array hishab
    for(int i=0 ; i<m ; i++){
        ll l=op[i][0], r=op[i][1];

        d2[l] += op[i][2];
        d2[r+1] -= op[i][2];
    }
    for(int i=1 ; i<n ; i++){
        d2[i] += d2[i-1];
    }
    for(int i=0 ; i<n ; i++){
        a[i] += d2[i];
    }

    for(ll i: a){
        cout << i << " ";
    }cout << "\n";
    
}

int main()
{
    Faster;
    
    Solve();
    
}


