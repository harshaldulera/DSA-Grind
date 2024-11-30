#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define ll long long

void nStarTriangle(int n){
    // Write your code here.
    for (int i = 0; i < n; i++){
        int j = 2 * (n - i) - 1;

        for (int k = 0; k < i; k++){
            cout << " ";
        }

        for (int l = 0; l < j; l++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}