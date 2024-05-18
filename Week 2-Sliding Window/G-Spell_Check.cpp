#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string main = "Timur";
    sort(main.begin(), main.end());
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if(n!=5){
            cout << "NO\n";
            continue;
        }

        sort(s.begin(), s.end());
        if(s==main){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}