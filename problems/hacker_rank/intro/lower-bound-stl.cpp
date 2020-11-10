#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n; int q; int y;
    int num;
    vector<int> v;
    
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> num;
        v.push_back(num);
    }

    cin >> q;

    for(int i=0;i<q;i++) {
        cin >> y;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), y);

        if(v[low-v.begin()] == y) 
            cout << "Yes " << (low-v.begin()+1) << endl;
        
        else
            cout << "No " << low-v.begin()+1 << endl;
    }

    return 0;
}
