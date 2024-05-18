#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);

        ll sum = 0;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            sum += abs(a[i]);
        }

        ll count = 0;
        ll found = 0;
        for(int i=0 ; i<n ; i++){
            if(count==0 and a[i]<0){
                count++;
            }
            else if(found==1 and a[i]<0){
                found = 0;
                count++;
            }
            else if(count!=0 and a[i]>0){
                found = 1;
            }
        }

        cout << sum << " " << count << "\n";
    }
}