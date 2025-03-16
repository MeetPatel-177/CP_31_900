#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        //n is the number of tires we have if we have odd number of tires or 2 tires
        //then we can't make any 4 or 6 tyres bus
        if(n%2 != 0 || n == 2) cout << -1 << endl;
        //we will take care of maxi_cars and mini_cars separately
        //the given code is self explanatory
        //we will first calculate both four and six wheeler cars for maxi and same for mini
        //and then we will print it according to given condititon
        else {
            long long maxi_cars, mini_cars;
            long long dup = n;
            long long four_wheeler_for_maxi = 0,six_wheeler_for_maxi = 0;
            while(dup%4 != 0) {
                dup -= 6;
                six_wheeler_for_maxi++;
            }
            four_wheeler_for_maxi = dup/4;
            maxi_cars = four_wheeler_for_maxi + six_wheeler_for_maxi;

            dup = n;
            long long four_wheeler_for_mini = 0, six_wheeler_for_mini = 0;
            while(dup%6 != 0) {
                dup -= 4;
                four_wheeler_for_mini++;
            }
            six_wheeler_for_mini = dup/6;
            mini_cars = four_wheeler_for_mini + six_wheeler_for_mini;
            
            cout << mini_cars << " " << maxi_cars << endl;
        }
    }
    return 0;
}