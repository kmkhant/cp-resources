#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = { 3, 2, 1, 3 };
    int max=0; int total;
    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++) {
        if(v[i] > max) {
            total = 0;
            max = v[i];
        }
        if(v[i] == max) {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}
