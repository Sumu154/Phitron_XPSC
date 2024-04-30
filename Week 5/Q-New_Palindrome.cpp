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
    string s;
    cin >> s;
    vector<int> count(26);
    for(int i=0 ; i<s.size() ; i++){
        count[s[i]-'a']++;
    }

    int oddVal = 0;
    int evenCount = 0;
    for(int i=0 ; i<26 ; i++){
        if(count[i]%2==0){
            if(count[i]!=0){
                evenCount++;
            }
        }
        else{
            oddVal = count[i];
        }
    }
    //cout << oddVal << " " << evenCount;

    if(evenCount>1 or (oddVal>1 and evenCount!=0)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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