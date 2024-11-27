// https://www.naukri.com/code360/problems/nth-fibonacci-number_74156

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int prev1 = 1;
    int prev2 = 0;
    for(int i = 2; i <= 2; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }   
    cout << prev1;

    return 0;
}