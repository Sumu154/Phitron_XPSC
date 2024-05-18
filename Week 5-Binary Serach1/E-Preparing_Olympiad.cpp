#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
//#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;


void Solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int ans = 0;
    int count, maxi, mini, sum;
    for(int i=0 ; i<(1<<n) ; i++){      //as n ta problem, so 2^n ta combination kora jabe
        count = maxi = sum = 0;
        mini = INT_MAX;

        for(int j=0 ; j<n ; j++){
            if(i & (1<<j)){      //check korbo i no combinatione koita 1 ace  
                count++;
                sum += a[j];
                maxi = max(maxi, a[j]);
                mini = min(mini, a[j]);
            }
        }

        int diff = maxi-mini;
        if(count>=2 and sum>=l and sum<=r and diff>=x){
            ans++;
        }
    }
    cout << ans << "\n";

}

int main()
{
    //Faster;
    Solve();
}