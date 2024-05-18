#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(vector<int> a)
{
    int n = a.size();
    int i=0, j=n-1;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

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

        int i=0, j=n-1;
        int flag = 0;
        int left, right;
        while(i<j){
            if(a[i]!=a[j]){
                left = a[i];
                right = a[j];
                flag = 1;
                break;
            }
            i++;
            j--;
        }

        if(!flag){
            cout << "YES\n";
        }
        else{
            vector<int> a1, a2;
            for(int i=0 ; i<n ; i++){
                if(a[i]==left){
                    continue;
                }
                a1.push_back(a[i]);
            }
            for(int i=0 ; i<n ; i++){
                if(a[i]==right){
                    continue;
                }
                a2.push_back(a[i]);
            }

            int ans1 = isPalindrome(a1);
            int ans2 = isPalindrome(a2);
            if(ans1 or ans2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}