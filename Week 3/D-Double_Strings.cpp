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
        vector<string> a(n);
        unordered_map<string, int> mp;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        string ans(n, '0');

        for(int i=0 ; i<n ; i++){
            if(a[i].size()==1){
                continue;
            }

            for(int j=0 ; j<a[i].size()-1 ; j++){
                string x="", y="";
                for(int k=0 ; k<=j ; k++){
                    x.push_back(a[i][k]);
                }
                for(int k=j+1 ; k<a[i].size() ; k++){
                    y.push_back(a[i][k]);
                }
                if(x==y){
                    if(mp[x] > 0){
                        ans[i] = '1';
                        break;
                    }
                }
                else{
                    if(mp[x]>0 and mp[y]>0){
                        ans[i] = '1';
                        break;
                    }
                }
                if(ans[i]=='1'){
                    break;
                }
            }
        }
         cout << ans << "\n";     
    }
}