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
        string s1, s2;
        cin >> s1 >> s2;

        if(s1==s2){
            cout << "=\n";
            continue;
        }

        int n1 = s1.size();
        int n2 =  s2.size();
        if(s1[n1-1] != s2[n2-1]){
            if(s1[n1-1] > s2[n2-1]){
                cout << "<\n";
            }
            else{
                cout << ">\n";
            }
        }
        else if(s1[n1-1]=='S'){
            if(n1 > n2){
                cout << "<\n";
            }
            else{
                cout << ">\n";
            }
        }
        else{
            if(n1 < n2){
                cout << "<\n";
            }
            else{
                cout << ">\n";
            }
        }
    }
}