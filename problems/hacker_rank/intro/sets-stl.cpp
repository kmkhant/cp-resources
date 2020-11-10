#include<iostream>
#include<set>

using namespace std;

int main() {
    int n; int op; int x;
    set<int> s;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
       cin >> op >> x;

       switch(op) {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if(s.find(x) == s.end())
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
                break; 
       } 
    }
    return 0;
}
