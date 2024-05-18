#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    for(int i=0 ; i<n ; i++){
        if(a[i]!=k){
            cout << a[i] << " ";
        }
    }
    cout << "\n";
}