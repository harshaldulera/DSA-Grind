#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

void nStarTriangle(int n){
    // Write your code here.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}