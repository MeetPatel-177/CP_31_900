#include <bits/stdc++.h>
using namespace std;

//Euclidian Algorthm for finding GCD of two number
//O(log(min(a,b))) TC
int gcd_of_a_b(int a, int b) {
    if(b == 0) return a;
    return gcd_of_a_b(a,a%b);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        //firstly we will calculate number of positions that each element must change
        //in order to be sorted 
        for(int i=0; i<n; i++) {
            //this will give number of positions need to change for every element
            arr[i] = abs(arr[i]-(i+1));
        }
        //the answer will be gcd of every arr[i]
        int gcd = arr[0];
        for(int i=1; i<n; i++) {
            //in built __gcd function internally uses euclidean algorithm makes it efficient
            gcd = __gcd(arr[i],gcd);
        }
        //O(nlog(min(a,b))) this will be total TC
        cout << gcd << endl;
    }
    return 0;
}