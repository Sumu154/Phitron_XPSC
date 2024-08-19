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
    ll m = ceil(sqrt(l)); ll n = floor(sqrt(r)); return n-m+1;
}

int BinarytoDec(string s){
    int k = s.size(); int ans = 0;
    for(int i=0 ; i<k ; i++){
        ans |= (s[i]-'0') << (k-1-i);
    } return ans;
}

string decToBinary(int n){
    string ans;
    while(n){
        if(n&1){ans += '1'; }
        else{ans += '0'; }
        n >>= 1;
    }
    reverse(ans.begin(), ans.end()); return ans;
}

void input(vector<int>&a, int n){
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
}
void output(vector<int> a){
    for(int i=0 ; i<a.size() ; i++){
        cout << a[i] << " ";
    }cout << "\n";
}

//*------------------------*//



void Solve()
{
    int n, q;
    cin >> n;
    vector<int> a(n), b(n);
    input(a,n);
    input(b,n);

    cin >> q;
    vector<int> d(q);
    input(d,q);

    map<int,int> mp;
    for(int i: d){
        mp[i]++;
    }

    for(int i=0 ; i<n ; i++){
        if(a[i]!=b[i]){
            if(mp[b[i]]>0){
                mp[b[i]]--;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        if(b[i]==d[q-1]){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";  
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

