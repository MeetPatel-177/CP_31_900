#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a,b;
        cin >> a >> b;
        //whenever both are same that means if you do any operations then both will be same 
        //always so maximum gcd of both will be infinite so we will print 0 0
        if(a == b) cout << 0 << " " << 0 << endl;
        //if both are not same then
        else {
            //max_gcd that we can achieve after doing all operation will be abs(a-b)
            long long max_gcd = abs(a-b);
            //there are two types of operations increasing and decreasing
            //for increasing min_steps is as follows
            long long min_steps_increasing = max_gcd - a%max_gcd;
            //for decreasing min_steps is as follows
            long long min_steps_decreasing = min(a,b)%max_gcd;
            //we will find minimum of both increasing and decreasing steps
            long long min_steps = min(min_steps_increasing, min_steps_decreasing);
            cout << max_gcd << " " << min_steps << endl;
        }
    }
    return 0;
}