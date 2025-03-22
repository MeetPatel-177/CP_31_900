#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n+5);
        for(int i=1; i<=n; i++) cin >> arr[i];
        int found = 0;
        //we will keep middle index and try to find first and last index for current middle ind
        for(int i=2; i<=n-1; i++) {
            int middle_ind = i;
            int first_ind = -1, last_ind = -1;
            for(int j=1; j<i; j++) {
                if(arr[j] < arr[i]) {
                    first_ind = j;
                    break;
                }
            }
            //if we can't find any first index for curr_middle index that means there is no
            //element in the left side of curr_mid_ind so we will not run loop for right side
            //otherwise we will search for right side for last index
            if(first_ind != -1) {
                for(int j=i+1; j<=n; j++) {
                    if(arr[j] < arr[i]) {
                        last_ind = j;
                        break;
                    }
                }
            }
            //now if we find both the indices then we can say we found out a valid pair of indices 
            //that satisfy the given conditions so we just print out it and break out from loop
            if(first_ind != -1 && last_ind != -1) {
                found = 1;
                cout << "YES" << endl;
                cout << first_ind << " " << middle_ind << " " << last_ind << endl;
                break;
            }
        }
        //if we are not able to found out any valid pair from whole loop then we will print NO
        if(!found) cout << "NO" << endl;
    }
    return 0;
}