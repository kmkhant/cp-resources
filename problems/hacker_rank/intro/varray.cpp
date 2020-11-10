#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, pos1, pos2, num;
    vector<int> v;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> num;
        v.push_back(num);
    }

    cin >> n;
    v.erase(v.begin()+n-1);

    cin >> pos1 >> pos2;
    v.erase(v.begin()+pos1-1, v.begin()+pos2-1);

    for(auto & i: v) {
        cout << i << " ";
    }

    return 0;
}
