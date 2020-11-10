#include <iostream>

using namespace std;

int main() {
    int a; int b;
    cin >> a >> b;
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i=a;i<=b;i++) {
        if(i >= 1 && i <= 9) {
            cout << num[i-1] << endl;
        }
        if(i > 9) {
            if(i%2==0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }

    }

    return 0;
}
