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
        sort(arr.begin(), arr.end());
        int maximum_same = 1;
        int curr_same = 1;
        for(int i=1; i<n; i++) {
            if(arr[i-1] == arr[i]) {
                curr_same++;
                maximum_same = max(maximum_same,curr_same);
            }else {
                curr_same = 1;
            }
        }
        int count = 0;
        int swaps = n - maximum_same;
        int curr_swaps = 0;
        int copies = 0;
        while(curr_swaps < swaps) {
            curr_swaps += (maximum_same*pow(2,count++));
            copies++;
        }
        cout << copies + swaps << endl;
    }
    return 0;
}