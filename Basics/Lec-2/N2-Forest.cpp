// https://www.naukri.com/code360/problems/n-2-forest_6570178

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

void nForest(int n) {
    for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cout << "*" << " ";
		}
	    cout << endl;
	}
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    nForest(n);

    return 0;
}