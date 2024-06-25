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
    int n;
    cin >> n;

    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    vector<int> co(12, -1);

    int count = 1;
    vector<int> ans(n);
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;

        for(int j=0 ; j<11 ; j++){
            if(x%p[j] == 0){
                if(co[j] == -1){
                    co[j] = count;
                    count++;
                }
                ans[i] = co[j];
                break;
            }
        }
    }

    cout << count-1 << "\n";
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

