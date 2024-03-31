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
        string s;
        cin >> n >> s;

        vector<ll> dispatch;

        ll total = 0;       //highest value jotota possible
        int minCng = 0;     //highest value paite minimum kotogula value change korte hbe
        for(int i=0 ; i<n ; i++){
            ll l = i;
            ll r = n-i-1;
            if(s[i]=='L'){
                if(r>l){
                    minCng++;
                    total += r;
                    dispatch.push_back(r-l);
                }
                else{
                    total += l;
                }
            }
            else{
                if(l>r){
                    minCng++;
                    total += l;
                    dispatch.push_back(l-r);
                }
                else{
                    total += r;
                }
            }
        }

        vector<ll> ans (n+1);
        for(int i=minCng ; i<=n ; i++){
            ans[i] = total;
        }
        sort(dispatch.begin(), dispatch.end(), greater<ll>());
        for(int i=minCng-1 ; i>=1 ; i--){
            total -= dispatch.back();
            dispatch.pop_back();
            ans[i] = total;
        }

        for(int i=1 ; i<=n ; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}