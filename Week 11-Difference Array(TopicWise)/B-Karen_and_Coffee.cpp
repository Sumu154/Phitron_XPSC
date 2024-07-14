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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> d(N);
    for(int i=0 ; i<n ; i++){
        int l,r;
        cin >> l >> r;

        d[l]++;
        d[r+1]--;
    }
    for(int i=1 ; i<N ; i++){
        d[i] += d[i-1];
    }

    vector<int> a(N);  //every temp e koita recipe ace oita
    int rec=0;
    for(int i=0 ; i<N ; i++){
        if(d[i] >= k){
            rec++;
        }
        a[i] = rec;
    }

    while(q--){
        int l,r;
        cin >> l >> r;

        cout << a[r]-a[l-1] << "\n";
    }
    
}

int main()
{
    Faster;
    
    Solve();
    
}


