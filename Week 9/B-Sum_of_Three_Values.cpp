#include<bits/stdc++.h>
using namespace std;

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
    int n, sum, val;
    cin >> n >> sum;
    vector<pair<ll,int>> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> val;
        a[i] = {val, i+1};
    }

    sort(a.begin(), a.end());
    for(int i=0 ; i<n ; i++){
        val = sum-a[i].first;      //a[i] er val nile check korbo baki duita number ace kina
        int r = n-1;
        for(int j=i+1 ; j<r ; j++){
            while(j+1<r and a[j].first+a[r].first>val){
                r--;
            }
            if(a[j].first+a[r].first == val){
                cout << a[i].second << " " << a[j].second << " " << a[r].second << "\n";
                return;
            }
        }
    }

    cout << "IMPOSSIBLE\n";

    
}

int main()
{
    Faster;
 
    Solve();
    
}

