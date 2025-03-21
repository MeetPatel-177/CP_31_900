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
        //we can do the given operation any number of times 
        //now as we know a&b <= a and a&b <= b and we also know that a&a = a
        //so we can just make all the numbers equal to and of all the numbers so
        //at the end all the numbers are same and will be equal to and of all numbers
        //as a&b <= a and a&b <= b so we will ended up getting minimum value of maximum
        //as all the elements at last will be same so it will be our answer
        int min_and = arr[0];
        for(int i=1; i<n; i++) {
            min_and &= arr[i];
        }
        cout << min_and << endl;
    }
    return 0;
}