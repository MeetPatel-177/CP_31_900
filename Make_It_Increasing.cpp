#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        int ope = 0;
        //not possible will keep track of if the array will be able to be increasing or not
        int not_possible = 0;
        //we will check from last element
        //if we found discontinuity then we will find number of operations we have to do
        //for make this discontinuity as continuity
        //number of operations will be [log2(arr[i]/arr[i+1]) + 1] aas here shown
        //here we have to check if any of both arr[i] or arr[i+1] is zero
        //if any of both is zero then it will be discontinuity and it is not possible
        //then we will make arr[i] = (arr[i]/2^curr_ope)
        //alternately if anywhere we found that current element is less than the curr index
        //then it will also be a sign of discontinuity as we can't make pre array increasing
        //as we have given that we have to make it strictly increasing
        for(int i=n-2; i>=0; i--) {
            if(arr[i] >= arr[i+1]) {
                if(arr[i] == 0 || arr[i+1] == 0) {
                    not_possible = 1;
                    break;
                }
                int curr_ope = log2(arr[i]/arr[i+1]) + 1;
                ope += curr_ope;
                arr[i] /= pow(2,curr_ope);
                if(arr[i] < i) {
                    not_possible = 1;
                    break;
                }
            }
        }
        //if it is not possible to make it increasing we will print -1 else number of ope
        if(not_possible) cout << -1 << endl;
        else cout << ope << endl;
    }
    return 0;
}