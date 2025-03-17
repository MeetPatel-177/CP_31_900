#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s,t;
        cin >> s >> t;
        //we will store all indices of every alphabet in s in array of vectors
        //this is the declaration of array of vectors in which every indices itself a vector
        //you can store many elements in every single indices
        vector<int> arr[26];
        //this will store every indices of every alphabet in given array of vectors
        for(int i=0; i<s.size(); i++) {
            arr[s[i] - 'A'].push_back(i);
        }
        int prev_ind = INT_MAX;
        int curr_ind = -1;
        int found = 1;
        //we will traverse from last alphabet of t and goes till first
        for(int i=t.size()-1; i>=0; i--) {
            char curr_char = t[i];
            //if curr_char does not exist in s then it is not possible so found = 0
            if(arr[curr_char - 'A'].size() == 0) {
                found = 0;
                break;
            }
            //we will take last index of current alphabet from corresponding vector
            curr_ind = arr[curr_char - 'A'].back();
            //if it will come after previous index then it will not possible to make 
            if(curr_ind >= prev_ind) {
                found = 0;
                break;
            }
            prev_ind = curr_ind;
            //we will pop the index that we are right now in
            arr[curr_char - 'A'].pop_back();  
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}