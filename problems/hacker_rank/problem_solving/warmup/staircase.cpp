#include <bits/stdc++.h>
using namespace std;
void staircase(int n) {
    for(int i=0;i<n;i++) {
        for(int k=n-i-1; k > 0; k--) {
            cout << " ";
        }
        for(int j=0;j<=i;j++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main() {
    staircase(6);
    return 0;
}
