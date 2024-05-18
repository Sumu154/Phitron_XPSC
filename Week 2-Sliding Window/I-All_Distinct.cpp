#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        unordered_map<int,int> mp;
        for(int i: a){
            mp[i]++;
        }

        int ans = 0;
        int evenFreg = 0;
        for(auto i: mp){
            if((i.second)%2 == 1){
                ans++;
            }
            else{
                evenFreg++;
            }
        }
        if(evenFreg%2==0){
            cout << ans+evenFreg << "\n";
        }
        else{
            cout << ans+evenFreg-1 << "\n";
        }

        
    }
}