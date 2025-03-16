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
        //first we will find maxi and mini and corresponding their indices
        int maxi = arr[0], mini = arr[0];
        int maxi_ind = 0, mini_ind = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] > maxi) {
                maxi = arr[i];
                maxi_ind = i;
            }else if(arr[i] < mini) {
                mini = arr[i];
                mini_ind = i;
            }
        }
        //if any one of the mini or maxi is currently at its right position
        //then we can transform array like that other one also be at right position
        //and then maxi - mini will be ans
        if((mini_ind == 0) || (maxi_ind == n-1)) cout << maxi - mini << endl;
        //now if both are not at the right position then
        //one possibility is like that we take mini to its right position or other second
        //possibility is like that we take maxi to its right position 
        //this both are described as one_poss and second_poss
        //now this both are corner case but we have to take care of general cases also
        //so the for loop here will store diff of consecutive numbers because
        //it can be also our answer at last the maximum of this 3 will be our final answer
        else {
            int max_diff = INT_MIN;
            int one_poss = arr[n-1] - mini;
            int second_poss = maxi - arr[0];
            int curr_diff = 0;
            for(int i=0; i<n-1; i++) {
                curr_diff = arr[i] - arr[i+1];
                max_diff = max(max_diff,curr_diff);
            }
            max_diff = max(max_diff,max(one_poss,second_poss));
            cout << max_diff << endl;
        }
    }
    return 0;
}