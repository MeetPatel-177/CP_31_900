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
        //we have to make sum = sum - 1 and there is no negative number in whole array
        //so to make it there is only two possibility either remove 1 or remove 1 with some zero's
        int n0 = 0, n1 = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] == 1) n1++;
            else if(arr[i] == 0) n0++;
        }
        //we can remove any 1 from array then we will get s-1
        int pairs_of_only_1 = n1;
        //let's take an example [1,1,1,0,0,0,0,0] if we have to make this s-1
        //how many ways we can select any pair with zero and one both
        //first we will take any 1 and for that 1 we will having choices for zero's
        //5C1 + 5C2 + 5C3 + 5C4 + 5C5 = 2^5 - 1
        //so general formula will be 2^n - 1
        long long pairs_of_0_and_1 = n1*(pow(2,n0) - 1);
        cout << pairs_of_0_and_1 + pairs_of_only_1 << endl; 
    }
    return 0;
}