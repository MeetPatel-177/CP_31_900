#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        //k is the maximum number of characters that we can remove
        int n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        //we will store all characters frequency in freq array
        vector<int>freq(26,0);
        //storing frequencies of all characters
        for(int i=0; i<n; i++) {
            freq[str[i] - 'a'] ++;
        }
        int odd_count = 0;
        //if we only have 1 odd_count or 0 odd_count then we can make it palindrome
        //after rearranging some characters otherwise not
        for(int i=0; i<26; i++) {
            if(freq[i] % 2 != 0) odd_count++;
        }
        //here if we have more than k+1 odd_count then we can only remove k characters
        //so we will still remained with 2 or more odd_count 
        //so that we cannot produce a palindrome string after removing k characters also
        if(odd_count > k + 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}