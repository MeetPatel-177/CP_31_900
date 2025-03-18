#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        //x0 is the initial position of grasshopper
        //n is number of jumps grasshopper have to do
        long long x0,n;
        cin >> x0 >> n;
        //if we do some calculation we got to know that after every 4 jumps the
        //grasshopper will be at the same position as he is before
        //so at the end we just have to take care of n%4 jumps
        long long no_of_jumps_have_to_do = n%4;
        //as already n-n%4 jumps we have already done so curr_d will be prev + 1
        long long curr_d = n - n%4 + 1;
        //this while loop will run at most 4 times as no_of_jumps_we_have_to_do will always
        //be less than 4 and inner conditions are as given in question
        while(no_of_jumps_have_to_do != 0) {
            if(x0%2 == 0) {
                x0 -= curr_d;
            }else {
                x0 += curr_d;
            }
            curr_d++;
            no_of_jumps_have_to_do--;
        }
        cout << x0 << endl;
    }
    return 0;
}