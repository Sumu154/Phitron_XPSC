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
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    string s;
    s.push_back('1');
    vector<ll> ans;
    ans.push_back(a[0]);

    bool broken = false;
    for(int i=1 ; i<n ; i++){
        if(!broken){
            if(a[i] >= ans.back()){
                s.push_back('1');
                ans.push_back(a[i]);
            }
            else{
                if(a[i] <= ans[0]){
                    broken = true;
                    s.push_back('1');
                    ans.push_back(a[i]);
                }
                else{
                    s.push_back('0');
                }
            }
        }
        else{
            if(a[i] >= ans.back()){
                if(a[i] > ans[0]){
                    s.push_back('0');
                }
                else{
                    s.push_back('1');
                    ans.push_back(a[i]);
                }
            }
            else{
                s.push_back('0');
            }
        }
    }

    cout << s << "\n";
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

