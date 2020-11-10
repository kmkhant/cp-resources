#include <bits/stdc++.h>

using namespace std;

int main() {
    string input = "06:40:03AM";
    int hh; stringstream ss; string result;

    hh = ((int)input[0] - '0')*10;
    hh += ((int)input[1] - '0');

    if(input[8] == 'P') {
        if(hh < 12)
            hh += 12;
        if(hh == 24)
            ss << "00" << input.substr(2, input.length()-4);
        else
            ss << hh << input.substr(2, input.length()-4);

        cout << "inside" << endl;
        result = ss.str();
        cout << result;
    } else {
        if(hh == 12)
            ss << "00" << input.substr(2, input.length()-4);
        else { 
            if(hh < 10)
                ss << "0" << hh << input.substr(2,input.length()-4);
            else
                ss << hh << input.substr(2, input.length()-4);
        }
        result = ss.str();
        cout << result;
    }
    
    
    return 0;
}
