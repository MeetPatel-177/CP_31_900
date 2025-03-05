#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a,b,n;
        cin >> a >> b >> n;
        vector<long long>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        //first we will go to 1 second from b so we will get b-1 seconds
        long long ans = b-1;
        //we will take all tools one by one by considering all the conditions
        //we are currently at 1 second so if we pick up a tool and use it
        //we will have (1+arr[i]) timer or (a) timer 
        //then again we go to 1 so we will getting (1+arr[i]-1) or (a-1) seconds
        for(int i=0; i<n; i++) {
            ans += min(1+arr[i]-1, a-1);
        }
        //at last we will be remained with 1 second that we will add and destroy bomb
        ans += 1;
        cout << ans << endl;
    }
    return 0;
}