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
    int n;
    cin >> n;
    vector<int> a[n];
    vector<int> uni;
    for(int i=0 ; i<n ; i++){
        int k;
        cin >> k;
        a[i].resize(k);
        for(int j=0 ; j<k ; j++){
            cin >> a[i][j];
            uni.push_back(a[i][j]);
        }
    }

    sort(uni.begin(), uni.end());
    uni.erase(unique(uni.begin(), uni.end()), uni.end());

    int ans=0;
    for(int exclude=1 ; exclude<=50 ; exclude++){
        vector<int> temp;
        for(int i=0 ; i<n ; i++){
            bool found = false;
            for(int j=0 ; j<a[i].size() ; j++){
                if(a[i][j]==exclude){
                    found = true;
                    break;
                }
            }
            if(!found){
                for(int j=0 ; j<a[i].size() ; j++){
                    temp.push_back(a[i][j]);
                }
            }
        }

        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(),temp.end()),temp.end());
        if(temp!=uni){
            ans = max(ans, (int)temp.size());
        }
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

