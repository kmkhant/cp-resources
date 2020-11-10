#include<bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {
    int min; int max; long sum = 0;
    min = arr[0];
    max = min;

    for(int i=0;i<arr.size();i++) {
        sum += arr[i];

        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    cout << sum - max << " " << sum - min << endl;
}

int main() {
    vector<int> v = {1,2,3,4,5};
    miniMaxSum(v); 
    return 0;
}
