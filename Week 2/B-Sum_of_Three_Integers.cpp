#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int k, s;
    cin >> k >> s;
    ll ans = 0;
    for(int x=0 ; x<=k ; x++){
        for(int y=0 ; y<=k ; y++){
            int z = s-x-y;
            if(z>=0 and z<=k){
                ans++;
            }
        }
    }
    cout << ans << "\n";
}