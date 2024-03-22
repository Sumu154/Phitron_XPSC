#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        char ch;
        string s;
        cin >> n >> ch >> s;

        if(ch=='g'){
            cout << 0 << "\n";
            continue;
        }

        vector<int> green;
        s += s;
        for(int i=0 ; i<2*n ; i++){
            if(s[i] == 'g'){
                green.push_back(i);
            }
        }

        int ans = 0;
        for(int i=0 ; i<n ; i++){
            if(s[i]==ch){
                int ub = lower_bound(green.begin(), green.end(), i)-green.begin();
                ans = max(ans, green[ub]-i);
            }
        }
        cout << ans << "\n";

        
    }    
}