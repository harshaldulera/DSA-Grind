// https://www.geeksforgeeks.org/problems/count-digits5716/1
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define ll long long

class Solution {
    public:
    int evenlyDivides(int n) {
        int cnt = 0;
        int temp = n;
        while(n > 0) {
            int digit = n % 10;
            if(digit != 0 && temp % digit == 0) {
                cnt++;
            }
            n /= 10;
        }
        return cnt;
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    Solution obj;
    cout << obj.evenlyDivides(n);

    return 0;
}