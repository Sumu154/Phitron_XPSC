#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s[(3*n)];
        map<string, int> mp;
        for(int i=0 ; i<n*3 ; i++){
            cin >> s[i];
            mp[s[i]]++;
        }    

        int point=0;
        for(int i=0 ; i<n*3 ; i++){        
            if(mp[s[i]] == 1){
                point += 3;
            }    
            else if(mp[s[i]] == 2){
                point += 1;
            }  

            if((i+1)%n == 0){
                cout << point << " ";
                point = 0;
                continue;
            }  
        }
        cout << "\n";
    }
}