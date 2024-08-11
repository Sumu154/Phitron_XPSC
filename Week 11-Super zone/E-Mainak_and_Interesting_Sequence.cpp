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
    ll n, m;
    cin >> n >> m;

    if(n>m or (n%2==0 and m%2==1)){     // 4  7
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    if(n%2==1){             //m odd even jai hok na ken
        for(int i=1 ; i<=n-1 ; i++){
            cout << 1 << " ";
        }
        cout << m-(n-1) << "\n";
    }
    else{           //n even m even
        for(int i=1 ; i<=n-2 ; i++){
            cout << 1 << " ";
        }
        ll rest = (m-(n-2))/2;
        cout << rest << " " << rest << "\n";
    }
    
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

