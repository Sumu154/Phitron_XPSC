#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;



void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    unordered_map<int,int> mp;
    for(int i=0 ; i<n ; i++){
        //for every number, find the prime
        for(int j=2 ; j*j<=a[i] ; j++){
            while(a[i]%j == 0){
                mp[j]++;
                a[i] /= j;
            }
        }
        if(a[i] > 1){
            mp[a[i]]++;
        }
    }

    for(auto i: mp){
        if(i.second%n != 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";


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

