#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        //whenever we have to work with digits of given number just use a string to store
        //number rather than storing it into integer
        //here we have to work with digits of number so we use string here
        string s;
        cin >> s;
        int n = s.size();
        int min_ope = INT_MAX;
        int curr_ope = 0;
        //for divisible by 25 we just have to see the last two dgits of number if last
        //two digits are divisible by 25 then whole number will be divisble by 25
        for(int i=n-1; i>=0; i--) {
            for(int j=i-1; j>=0; j--) {
                int last_digit = s[i] - '0';
                if(last_digit % 5 != 0) break;
                int second_last_digit = s[j] - '0';
                int last_two_digits = second_last_digit*10 + last_digit;
                if(last_two_digits % 25 == 0) {
                    //i-j-1 is for distance between current last_digit and currr_second_last
                    //n-i-1 is for last some digits that has to be deleted
                    curr_ope = (n-i-1) + (i-j-1);
                    min_ope = min(min_ope,curr_ope);
                }
            }
        }
        cout << min_ope << endl;
    }
    return 0;
}