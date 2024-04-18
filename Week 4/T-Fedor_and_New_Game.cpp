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



void Solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m+1);
    for(int i=0 ; i<m+1 ; i++){
        cin >> a[i];
    }

    vector<vector<int>> all_mask;
    for(int i=0 ; i<=m ; i++){
        vector<int> temp;
        for(int k=0 ; k<n ; k++){
            if(a[i]&(1<<k)){
                temp.push_back(1);
            }
            else{
                temp.push_back(0);
            }
        }
        all_mask.push_back(temp);
    }

    int ans = 0;
    vector<int> fedor_mask = all_mask[m];
    for(int i=0 ; i<all_mask.size()-1 ; i++){
        vector<int> temp = all_mask[i];
        
        int count = 0;
        for(int k=0 ; k<n ; k++){
            if(fedor_mask[k]!=temp[k]){
                count++;
            }
        }
        if(count<=k){
            ans++;
        }
    }
    cout << ans << "\n";


}

int main()
{
    Faster;
    
    Solve();
    
}