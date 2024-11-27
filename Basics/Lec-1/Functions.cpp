// https://www.geeksforgeeks.org/problems/pass-by-reference-and-value/1

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        vector<int> ans;
        int one = a + 1;
        ans.emplace_back(one);
        int two = b + 2;
        ans.emplace_back(two);
        return ans;
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10;
    int b = 20;

    Solution sol;
    vector<int> res = sol.passedBy(a, b);

    for(auto i : res) {
        cout << val << " ";
    }

    return 0;
}