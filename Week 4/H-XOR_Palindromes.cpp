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
    int n;
    string s;
    cin >> n >> s;

    int match=0, buggish=0;
    int i=0, j=n-1;
    while(i<j){
        if(s[i]==s[j]){
            match += 2;   
        }
        else{
            buggish++;
        }
        i++;
        j--;
    }

    string ans;
    for(int i=0 ; i<=n ; i++){
        int total = i;   //total 1 kotogula string e
        total -= buggish;   //buggish hocce at least jeta lagbei,,so total-buggish korle
                            //baki 1 kotogula seta pabo
        if(total<0){
            ans.push_back('0');      //total<0 mane jotogula 1 amr at least lagbe seta nai so 0 boshabo
            continue;
        }
        
        total = max(total%2, total-match);                

        if((total-n%2)<=0){              //n%2==0 mane even length
            ans.push_back('1');          //n%2==1 mane odd length
        }
        else{
            ans.push_back('0');
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