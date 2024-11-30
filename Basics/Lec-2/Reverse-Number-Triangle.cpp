// https://www.naukri.com/code360/problems/reverse-number-triangle_6581889
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define ll long long

void nNumberTriangle(int n) {
    // Write your code here.
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}