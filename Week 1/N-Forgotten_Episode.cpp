#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int maxi = INT_MIN;
    for(int i=0 ; i<n-1 ; i++){
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    
    vector<int> count(maxi+2);
    for(int i=0 ; i<n ; i++){
        count[a[i]]++;
    }
    for(int i=0 ; i<=count.size() ; i++){
        if(count[i]==0){
            cout << i << "\n";
            return 0;
        }
    }

}