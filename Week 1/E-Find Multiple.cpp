#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int multi = 2;
    while(c<=b){
        if(c>=a and c<=b){
            cout << c << "\n";
            return 0;
        }
        c *= multi;
        multi++;
    }
    cout << -1 << "\n";

}
