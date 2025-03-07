#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        //we will check how many maximum continuous same signs are there
        //the number of different elements only depend upon this
        int most_continuous_same_sign = 1;
        int curr_continuous_same_sign = 1;
        for(int i=0; i<n; i++) {
            if(str[i] == str[i+1]) {
                curr_continuous_same_sign++;
                most_continuous_same_sign = max(most_continuous_same_sign,curr_continuous_same_sign);
            }else {
                curr_continuous_same_sign = 1;
            }
        }
        //why +1 because we will always have one extra element
        cout << most_continuous_same_sign+1 << endl;
    }
    return 0;
}