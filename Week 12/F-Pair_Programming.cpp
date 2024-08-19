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
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i=0 ; i<m ; i++){
        cin >> b[i];
    }

    int i=0, j=0, mini;
    vector<int> ans;
    while(i<n or j<m){
        if(i<n and a[i]==0){
            ans.push_back(a[i++]);
            k++;
        } 
        else if(j<m and b[j]==0) {
            ans.push_back(b[j++]);
            k++;
        } 
        else if(i<n and a[i]<=k){
            ans.push_back(a[i++]);
        } 
        else if(j<m and b[j]<=k){
            ans.push_back(b[j++]);
        } 
        else{
            cout << -1 << "\n";
            return;
        }
    }

    for(int i: ans){
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

