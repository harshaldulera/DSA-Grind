// https://www.naukri.com/code360/problems/n-triangles_6573689

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

void nTriangle(int n) {
    for(int i = 0; i < n; i++) {
    	int a = 1;
        for(int j = 0; j <= i; j++) {
            cout << a << " ";
			a++;
        }
        cout << endl;
    }
}   

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}