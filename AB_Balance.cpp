#include <bits/stdc++.h>
using namespace std;

//remember this intuition
int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int n = str.size();
        //we just have to check first and last element if both are same then it is guranteed 
        //that in between of both there are always same number of ab and ba
        if(str[0] == str[n-1]) cout << str << endl;
        //if both are different then just flip any one of them we can flip str[0] or str[n-1]
        //after flipping we will get balanced ab and ba this is guranteed
        else {
            if(str[n-1] == 'a') str[n-1] = 'b';
            else str[n-1] = 'a';
            cout << str << endl;
        }
    }
    return 0;
}