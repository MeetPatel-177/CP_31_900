#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int moves = 0;
        while(n != 1) {
            //if at any time the number is not a multiple of 3 then we can't make it a multiple
            //of 6 as we only have one type of operation that is multiply n with 2
            //so only possibility is number either is already multiple of 6 or multiple of 3
            if(n % 3 != 0) {
                moves = -1;
                break;
            }
            if(n%6 == 0) {
                n /= 6;
                moves++;
            }else {
                n *= 2;
                moves++;
            }
        }
        cout << moves << endl;
    }
    return 0;
}