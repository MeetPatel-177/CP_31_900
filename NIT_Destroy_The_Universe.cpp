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
        int i=0, j=n-1;
        //first we will check both the corner part
        while(i < n && arr[i] == 0) i++;
        while(j >= 0 && arr[j] == 0) j--;
        //now if i > j that means whole array has already all zeros
        if(i > j) cout << 0 << endl;
        //if not above then we will traverse in remaining part of array that is from i to j
        //if we encounter a zero in between of traversing then we will make whole array from
        //i to j as the smallest element that does not exist in between and in second ope
        //we will again select the same subsegment and make whole array zero
        //if we can't encounter any zero in between that means in between all elements
        //are non zero so we just select the whole subsegment and make them zero
        else {
            int found = 0;
            while(i <= j) {
                if(arr[i] == 0) {
                    found = 1;
                    break;
                }
                i++;
            }
            if(found) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}