#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1,2,3,4};
    int count = 3;
    for(int i=0;i<4;i++) {
        cout << "i: " << i << ", count: " << count << endl; 
        count--;
    }
    return 0;
}
