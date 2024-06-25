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
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    ll gcd1=0, gcd2=0;
    for(int i=0 ; i<n ; i++){
        if(i%2 == 0){
            gcd1 = __gcd(gcd1, a[i]);               //1st set even indexer value gula
        }
        else{
            gcd2 = __gcd(gcd2, a[i]);                //2nd set odd indexer value gula
        }
    }

    for(int i=0 ; i<n ; i+=2){
        if(a[i]%gcd2 == 0){
            gcd2 = 0;
            break;
        }
    }
    for(int i=1 ; i<n ; i+=2){
        if(a[i]%gcd1 == 0){
            gcd1 = 0;
            break;
        }
    }

    if(gcd1==0 and gcd2==0){              //duitai 0 mane kono set e valid na
        cout << 0 << "\n";
    }
    else if(gcd1<=1){                    //gcd1 0 maane set1 valid na, 1 mane common divisor nai so ans hbe gcd2
        cout << gcd2 << "\n";
    }
    else{
        cout << gcd1 << "\n";
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

