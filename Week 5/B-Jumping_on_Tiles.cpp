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
    cin >> s;
    n = s.size();

    char mini = min(s[0], s[n-1]);
    char maxi = max(s[0], s[n-1]);

    vector<pair<char,int>> order;   //store korbo each char with its index
    for(int i=0 ; i<n ; i++){
        if(s[i]<=maxi and s[i]>=mini){
            order.push_back({s[i], i});
        }
    }

    sort(order.begin(), order.end(), [&](auto a, auto b){
        return a.second < b.second;
    });

    sort(order.begin()+1, order.begin()+order.size()-1, [&](auto a, auto b){
        if(s[0] > s[n-1]){
            return a.first > b.first;
        }
        return a.first < b.first;
    });

    vector<int> ans;
    ll cost = 0;

    ans.push_back(1);
    for(int i=1 ; i<order.size() ; i++){
        cost += abs(order[i-1].first - order[i].first);
        ans.push_back(order[i].second+1);
    }

    cout << cost << " " << ans.size() << "\n";
    for(auto i: ans){
        cout << i << " ";
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