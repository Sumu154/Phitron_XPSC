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

        map<int,int> mp;
        int maxFreq = 0;
        for(int i: a){
            mp[i]++;
            maxFreq = max(maxFreq, mp[i]);
        }

        int same = maxFreq;   //kotogula same integer ace array te
        int ans = 0;
        while(same < n){   //n ta same hole to ar loop chalanor drkar nai
            ans++;
            int diff = n-same;    //kotogula baki ace same hote 
            if(diff>same){
                ans += same;
                same *= 2;
            }
            else{
                ans += diff;
                same += diff;
            }
        }

        cout << ans << "\n";
    }
    
}