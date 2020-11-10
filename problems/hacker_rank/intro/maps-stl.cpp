#include<bits/stdc++.h>

using namespace std;

int main() {
    string key; int val;
    map<string, int> m;
    int n; int op;

    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> op >> key;
        switch(op) {
            case 1:
                cin >> val;
                m[key] += val;
                break;
            case 2:
                m.erase(key);
                break;
            case 3:
                cout << m[key] << endl;
                break;
        }
    }
    return 0;
}
