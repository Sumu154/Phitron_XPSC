#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> count(26);
    string s;
    cin >> s;
    for(int i=0 ; i<s.size() ; i++){
        count[s[i]-'a']++;
    }
    for(int i=0 ; i<26 ; i++){
        if(count[i]==0){
            cout << char(i+'a');
            return 0;
        }
    }
    cout << "None\n";
}