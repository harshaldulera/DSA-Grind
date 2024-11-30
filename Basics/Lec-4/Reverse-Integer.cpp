// https://leetcode.com/problems/reverse-integer

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define ll long long

class Solution {
public:
    int reverse (int x) {
        int ans = 0;
        while(x != 0) {
            int digit = x % 10;
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >> x;
    Solution obj;   
    cout << obj.reverse(x);

    return 0;
}