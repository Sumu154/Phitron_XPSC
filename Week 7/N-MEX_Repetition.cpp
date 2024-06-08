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


int getMax(int n, set<int> s)
{
    int cur = 0;
    auto it = s.begin();
    while(cur<=n and it!=s.end()){
        if(cur != *it){
            return cur;
        }
        cur++;
        it++;
    }
    return n;
}

void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    set<int> s;
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        s.insert(a[i]);
    }

    if(n==1){
        if(k%2 == 1){
            a[0] = 1-a[0];
        }
        cout << a[0] << "\n";
        return;
    }

    k = k%(n+1);
    if(k==0){
        for(int i=0 ; i<n ; i++){
            cout << a[i] << " ";
        }
        return;
    }

    for(int i=n-k+1 ; i<n ; i++){
        cout << a[i] << " ";
    }
    cout << getMax(n, s) << " ";
    for(int i=0 ; i<n-k ; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    
    
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

