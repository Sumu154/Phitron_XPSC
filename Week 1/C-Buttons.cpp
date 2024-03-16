#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max({a+b, 2*a-1, 2*b-1});
}
