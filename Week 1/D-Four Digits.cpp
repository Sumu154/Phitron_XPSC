#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans;
    int count = 4;
    while(n>0){
        ans += to_string(n%10);
        n /= 10;
        count--;
    }
    while(count>0){
        ans += '0';
        count--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;

}
