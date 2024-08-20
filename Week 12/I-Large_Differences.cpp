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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i=1 ; i<n ; i++){
        ans += abs(a[i]-a[i-1]);
    }
    // cout << ans << "\n";

    int temp = ans;
    ans = max(ans, temp - abs(a[1]-a[0]) + abs(a[1]-1));
    ans = max(ans, temp - abs(a[1]-a[0]) + abs(a[1]-k));
    ans = max(ans, temp - abs(a[n-1]-a[n-2]) + abs(a[n-2]-1));
    ans = max(ans, temp - abs(a[n-1]-a[n-2]) + abs(a[n-2]-k));
    for(int i=1 ; i<n-1 ; i++){
        int diff = abs(a[i]-a[i+1]) + abs(a[i]-a[i-1]);
        
        //making a[i]=1  
        int sum1 = temp - diff + abs(a[i-1]-1) + abs(a[i+1]-1);
        
        //making a[i]=k  
        int sum2 = temp - diff + abs(a[i-1]-k) + abs(a[i+1]-k);
        int sum = max(sum1,sum2);

        ans = max(ans, sum);
    
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

