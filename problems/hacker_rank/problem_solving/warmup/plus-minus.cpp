#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    float total_pos = 0; float total_neg = 0; float total_zero = 0;
    int n; int num;
    vector<int> v;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
        
        if(num > 0)
            total_pos++;
        else if(num == 0)
            total_zero++;
        else
            total_neg++;
    }

    cout << setprecision(6);
    cout << total_pos/n << endl;
    cout << total_neg/n << endl;
    cout << total_zero/n << endl;
    return 0;
}
