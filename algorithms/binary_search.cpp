#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    if(r>=1) {
        int mid = (l+(r-1))/2;

        if( arr[mid] == x) {
            return mid;
        }

        if(x < arr[mid]) {
            return binarySearch(arr, l, mid-1, x);
        }

        if(x > arr[mid]) {
            return binarySearch(arr, mid+1, r, x);
        }
    }

    return -1;
}

int main() {
    int arr[] = {2,4,6,12,30,44};
    int x = 30;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1) ? cout << "Element is not found in the array."
                   : cout << "Element is at the index: " << result << endl;

    return 0;
}
