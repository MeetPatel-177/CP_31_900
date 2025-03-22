#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int n = str.size();
        int n0 = 0;
        //we have to delete any two adjascent elements in which both elements are distinct
        //so we will find freq of both 0's and 1's
        for(int i=0; i<n; i++) {
            if(str[i] == '0') n0++;
        }
        int n1 = n - n0;
        //now the max moves we can do is min(n0,n1) as after this number of moves there is no
        //character left of min so all remaining characters will be same so there is no point
        //to remove it
        int tot_no_of_moves = min(n0, n1);
        //now if no of moves is even that means both have done equal number of moves
        //so now it's alice's turn but now alice can't move anything so he lose 
        //if no of moves is odd then it will be bob's turn and alice will win 
        if(tot_no_of_moves % 2 != 0) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
    return 0;
}