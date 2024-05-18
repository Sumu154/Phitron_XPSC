#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }

        for(int i=0 ; i<n ; i++){
            int size;
            cin >> size;
            string s;
            cin >> s;
            for(int k=0 ; k<size ; k++){
                if(s[k]=='D'){
                    if(a[i]==9){
                        a[i] = 0;
                        continue;
                    }
                    a[i] += 1;
                }
                else{
                    if(a[i]==0){
                        a[i] = 9;
                        continue;
                    }
                    a[i] -= 1;
                }

            }
            
        }
        for(int i: a){
            cout << i << " ";
        }
        cout << "\n";
    }
}