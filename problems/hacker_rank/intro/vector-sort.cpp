#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int num;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);        
    }

    sort(v.begin(), v.end());

    for(auto & i: v)
        cout << i << " ";
    return 0;
}
