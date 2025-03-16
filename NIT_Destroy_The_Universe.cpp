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
        while(i < n && arr[i] == 0) i++;
        while(j >= 0 && arr[j] == 0) j--;
        if(i > j) cout << 0 << endl;
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