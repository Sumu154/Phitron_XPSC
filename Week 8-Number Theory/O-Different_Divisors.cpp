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

vector<int> prime;
void initialize()
{
    vector<bool> a(100000, true);
    for(int i=2 ; i*i<=100000 ; i++){
        if(a[i]){
            for(int j=2*i ; j<=100000 ; j+=i){
                a[j] = false;
            }
        }
    }

    for(int i=2 ; i<100000 ; i++){
        if(a[i]){
            prime.push_back(i);
        }
    }
}

void Solve()
{
    int d;
    cin >> d;

    int n = prime.size();
    
    ll div1, div2;
    for(int i=0 ; i<n ; i++){
        if(prime[i]-1 >= d){
            div1 = prime[i];
            break;
        }
    }

    for(int i=0 ; i<n ; i++){
        if(prime[i]-div1 >= d){
            div2 = prime[i];
            break;
        }
    }
    
    cout << div1*div2 << "\n";
}

int main()
{
    Faster;
    int t;
    cin >> t;
    initialize();
    while(t--){
        Solve();
    }
}

