#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans=0, sum=0;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='('){
                sum++;
            }
            else{
                if(sum>0){
                    sum--;
                }
                else{
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}