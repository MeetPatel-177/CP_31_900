#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,k,x;
        cin >> n >> k >> x;
        //1 + 2 + 3 + ... + n
        long long total_sum = n*(n+1)/2;
        //1 + 2 + 3 + ... + k
        long long first_k_sum = k*(k+1)/2;
        //1 + 2 + 3 + ... + (n-k)
        long long first_n_k_sum = (n-k)*(n-k+1)/2;
        //if total sum will be less than x that means x is more than total sum
        //so we can't do it anyways

        //smallest sum that we can find from exactly k elements between 1 to n
        //is if we choose all k elements from 1 to k but if it is more than x
        //that means smallest sum is also greater than x so we can't do it anyways

        //upper both condition is base condition if they dosen't exist we can't do it anyways
        //now the main deciding condition is if both of the above condition is correct
        //so now we need to actully pick up any k elements from 1 to n 
        //so if first (n-k) elements sum is greater than (totalsum-x) it will be wrong why?
        //let us consider a example (9 6 40)
        //total_sum = 45 and first_k_sum = 21 so first both is satisfied 
        //now the thing is we have to remove n-k elements from total sum so that our sum will become x 
        //but if the smallest sum that we can remove is (first n-k sum) that will be 6 here
        //and that is (6 > 45-40) = (6 > 5) so we can't even remove smallest elements
        //so how can we remove bigger elements to get sum x
        if(total_sum < x || first_k_sum > x || first_n_k_sum > total_sum-x) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}