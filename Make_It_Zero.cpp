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
        //this variable will keep track if all are already zero or not
        int already_zero = 1;
        for(int i=0; i<n; i++) {
            if(arr[i] != 0) already_zero = 0;
        }
        //if all elements are already zero then we don't have to do anything
        if(already_zero) cout << 0 << endl;
        else {
            //if n is even then 
            if(n % 2 == 0) {
                int total_xor_of_all_elements = 0;
                for(int i=0; i<n; i++) {
                    total_xor_of_all_elements ^= arr[i];
                }
                //if total xor is zero so we will just take l as 1 and r as n and make all 0
                if(total_xor_of_all_elements == 0) {
                    cout << 1 << endl;
                    cout << 1 << " " << n << endl;
                }
                //if not zero so first we will make all s(xor of all) then again 
                //perform same operation since n is even all got cancelled and become zero
                else {
                    cout << 2 << endl;
                    cout << 1 << " " << n << endl;
                    cout << 1 << " " << n << endl;
                }
            }
            //if n is odd then
            else {
                //we will first check xor of first n-a elements
                int xor_till_n_1_elements = 0;
                int last_ele = arr[n-1];
                for(int i=0; i<n-1; i++) {
                    xor_till_n_1_elements ^= arr[i];
                }
                //if xor till n-1 elements is zero then 
                if(xor_till_n_1_elements == 0) {
                    //if last ele is already zero then we just have to make first n-1 
                    //elements since total xor is already zero so only 1 operation is needed
                    if(last_ele == 0) {
                        cout << 1 << endl;
                        cout << 1 << " " << n-1 << endl;
                    }
                    //if last ele is not zero then since we have total xor till n-1 elements
                    //is zero so we will first make first n-1 elements as zero
                    //then at the end we will pick last two elements and firstly
                    //both element will become last elemnt and in last operation both
                    //become 0 as both are same
                    else {
                        cout << 3 << endl;
                        cout << 1 << " " << n-1 << endl;
                        cout << n-1 << " " << n << endl;
                        cout << n-1 << " " << n << endl;
                    }
                }
                //if xor till n-1 elements is not zero then
                else {
                    //if last ele is zero then we will first make first n-1 elements
                    //as s the xor then in second operation we will make all zero
                    //as (n-1) will be even so all will be cancel each other
                    if(last_ele == 0) {
                        cout << 2 << endl;
                        cout << 1 << " " << n-1 << endl;
                        cout << 1 << " " << n-1 << endl;
                    }
                    //if last ele is not zero then we will make first n-1 elements s in 1st ope
                    //then 2nd ope we will make first n-1 element 0
                    //then in 3rd ope we will make last two element same as last ele
                    //then in 4th ope we will make last two element zero
                    else {
                        cout << 4 << endl;
                        cout << 1 << " " << n-1 << endl;
                        cout << 1 << " " << n-1 << endl;
                        cout << n-1 << " " << n << endl;
                        cout << n-1 << " " << n << endl;
                    }
                }
            }
        }
    }
    return 0;
}