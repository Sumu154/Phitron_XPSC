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

int valSqrt(int l, int r){
    ll m = ceil(sqrt(l));
    ll n = floor(sqrt(r));
    return n-m+1;
}

int BinarytoDec(string s)
{
    int k = s.size();
    
    int ans = 0;
    for(int i=0 ; i<k ; i++){
        ans |= (s[i]-'0') << (k-1-i);
    }

    return ans;
}

int charToInt(char ch)
{
    return ch-'0';
}

//*------------------------*//



void Solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    map<ll,int> mp;
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<ll> pro;
    for(auto it: mp){
        ll val = it.first;
        int freq = it.second;

        if(val<=n){
            for(int i=1 ; i<freq ; i++){
                pro.push_back(val);
                mp[val]--;
            }
        }
        else{
            for(int i=1 ; i<=freq ; i++){
                pro.push_back(val);
            }
        }
    }


    int count=1;
    int ans=0;
    for(int i=0 ; i<pro.size() ; i++){
        for(int j=count ; j<=n ; j++){
            if(mp[j]==1){
                count++;
            }
            else{
                break;
            }
        }

        int x = (pro[i]-1)/2;       //highest koto number reminder paoa jabe,,for 7 it is -> 3
        if(count <= x){
            count++;
            ans++;
        }
        else{
            cout << -1 << "\n";
            return;
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

/*
* stuff you should look before submission
    * constraint and time limit
    * int overflow
    * special test case (n=0 or n=1 or n=2)
*/