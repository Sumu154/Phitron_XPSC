#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        int flag =  true;
        for(int i=0 ; i<n ; i++){
            if((s1[i]=='R' and s2[i]!='R') or (s1[i]!='R' and s2[i]=='R')){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}