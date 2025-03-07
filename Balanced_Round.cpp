#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        int max_continuous = 1;
        int curr_continuous = 1;
        for(int i=0; i<n-1; i++) {
            if((arr[i+1] - arr[i]) <= k) {
                curr_continuous++;
                max_continuous = max(max_continuous,curr_continuous);
            }else {
                curr_continuous = 1;
            }
        }
        cout << n - max_continuous << endl;
    }
    return 0;
}