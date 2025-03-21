#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,x;
        cin >> n >> x;
        //here we don't have to work with every element simultaneously we can just say
        //all elements differ from each other and so we don't need to store it anywhere
        //we just have to use all elements only one time so here we are not storing all
        //elements in an array and optiise space this approach will use O(1) space while
        //storing all elements in an array would take O(n) space so just avoid it
        long long maxi_beauty = 0, mini_beauty = 0;
        //just a straight forward approach
        long long tot_sum = 0;
        while(n--) {
            long long a;
            cin >> a;
            tot_sum += a;
            if(a % x == 0) maxi_beauty += a/x;
            else maxi_beauty += (a/x + 1);
        }
        if(tot_sum % x == 0) mini_beauty = tot_sum/x;
        else mini_beauty = tot_sum/x + 1;
        cout << mini_beauty << " " << maxi_beauty << endl;
    }
    return 0;
}