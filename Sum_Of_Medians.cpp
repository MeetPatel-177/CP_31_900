#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int>arr(k*n+5);
        for(int i=1; i<=k*n; i++) {
            cin >> arr[i];
        }
        //medians should be maximum elements in order to make whole sum maximum
        //so we just try to take larger elements for being median of any given subsegment
        //this is just the median index of all k different arrays
        int median_ind = n % 2 == 0 ? n/2 : n/2 + 1;
        //if we have to maximize the sum of all medians then we have to put maximum
        //posible value at the median index
        //so we will pick median_ind - 1 number of elements from start and put it in an array
        //then remaining elements we will fill by larger elements that is from last of array
        //from this we will ended up getting mximum possible value at the median index for each
        //of the k arrays so overall sum will be also maximized
        int will_pick_from_start = median_ind - 1;
        int will_pick_from_last = n - will_pick_from_start;
        int curr_ind = n*k - will_pick_from_last + 1;
        long long max_median_sum = 0;
        while(k--) {
            max_median_sum += 1LL*arr[curr_ind];
            curr_ind -= will_pick_from_last;
        }
        cout << max_median_sum << endl;
    }
    return 0;
}