#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

void triangle(int n ) {
    int a = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << a << " ";
        }
        a++;
        cout << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    triangle(n);

    return 0;
}