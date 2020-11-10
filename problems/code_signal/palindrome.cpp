#include<iostream>
#include<stdlib.h>

using namespace std;

checkPalindrome(string inputString) {
    if(inputString.size() < 2) {
        return true;
    }

    if(inputString[0] != inputString.back() ) {
        return false;
    }

    return checkPalindrome(inputString.substr(1, inputString.size() - 2));
}

int main() {
    string inputString = "ada";
    cout << checkPalindrome(inputString) << endl;
    return 0;
}
