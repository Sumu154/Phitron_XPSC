#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    ll evenSum=0, oddSum=0;
    ll minOdd = INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(a[i]%2==0){
            evenSum += a[i];
        }
        else{
            oddSum += a[i];
            minOdd = min(minOdd, a[i]);
        }
    }
    if(oddSum%2==0){
        cout << evenSum+oddSum << "\n";
    }
    else{
        cout << evenSum+oddSum-minOdd << "\n";
    }
}