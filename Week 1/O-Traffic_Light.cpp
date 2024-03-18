#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char ch;
        string s;
        cin >> n >> ch >> s;

        int ans = 0;
        bool found = false;
        for (int i = 0; i < 2 * n; i++) {
            if (s[i % n] == 'g') {
                found = true;
                break;
            }
            ans++;
        }

        if (!found && ch != 'g') {
            for (int i = 0; i < n; i++) {
                if (s[i] == 'g') {
                    break;
                }
                ans++;
            }
        }
        else if (!found && ch == 'g') {
            for (int i = 0; i < n; i++) {
                if (s[i] == 'g') {
                    found = true;
                    break;
                }
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
