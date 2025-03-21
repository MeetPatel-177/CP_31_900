#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        int found = 0;
        while(n) {
            if(n%2 != 0 && n != 1) {
                found = 1;
                cout << "YES" << endl;
                break;
            }
            n /= 2;
        }
        if(!found) cout << "NO" << endl;
    }
    return 0;
}