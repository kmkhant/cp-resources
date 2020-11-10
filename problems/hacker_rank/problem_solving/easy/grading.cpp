#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {
    vector<int> grades = { 73, 67, 38, 33};
    double num; vector<int> result;

    for(int i=0;i<grades.size();i++) {
        // input starts here
        num = grades[i]; 

        int next = (int)ceil(num/5) * 5;
        if((next-num) < 3 && num > 37) {
            num = next;
        }

        cout << num;
    }
    return 0;
}
