#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m,i,j;
        cin >> n >> m >> i >> j;
        //the longest path from any point will always be first and last point 
        //as we have to travel whole rectangle so it will be the maximum possible path
        //in which the boy has to travel longest
        cout << 1 << " " << 1 << " " << n << " " << m << endl;
    }
    return 0;
}