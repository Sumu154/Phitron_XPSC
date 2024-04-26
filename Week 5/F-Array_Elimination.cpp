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

/*
It can be proven that exists at least one possible k
for any array a

------> that possible case is where k=1
        x = ai&ai = ai
        ai = ai-x = 0

        evabe each element ekbar kore eliminte kore shb element 0 banano possible


13 7 25 19
13    ->   01101
7     ->   00111
25    ->   11001
19    ->   10011
setCount-> 21224

*/


void Solve()
{
   int n;
    cin >> n;
    vector<int> a(n), setCount(33);   //32 bit highest integer so.....
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
 
    for(int j=0 ; j<32 ; j++){
        for(int i=0 ; i<n ; i++){
            if(a[i] & (1<<j)){
                setCount[j]++;             //each pos e kotogula set bit ace in total ta hishab korteci
            }
        }
    }
 
    vector<int> ans;
    for(int i=1 ; i<=n ; i++){       // k er value 1 to n pornonto hote pare loop tai 1 to n
        bool ok = 1;
        for(int j=0 ; j<32 ; j++){
            if(setCount[j]%i != 0){        //setCount jodi k er possible value diye divisible na hoy kono bit er
                ok = false;
                break;
            }
        }
 
        if(ok){
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());
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