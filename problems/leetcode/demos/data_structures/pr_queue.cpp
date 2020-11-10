#include <iostream>
#include <queue>

using namespace std;

void showpq(priority_queue<int> gq) {
    priority_queue<int> g = gq;
    while(!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }

    cout << '\n';
}

int furthestBuilding(vector<int>&A, int bricks, int ladders) {
    priority_queue<int> pq;
    for(int i=0; i < A.size() - 1; i++) {
        int d = A[i+1] - A[i];
        if ( d > 0)
            pq.push(-d);
        if (pq.size() > ladders) {
            bricks += pq.top();
            pq.pop();
        }

        if (bricks < 0) 
            return i;
    }

    return A.size() - 1;
}

int main() {
    priority_queue<int> gquiz;
    gquiz.push(4);
    gquiz.push(2);
    gquiz.push(7);
    gquiz.push(6);
    gquiz.push(9);
    gquiz.push(14);
    gquiz.push(12);

    cout << "The priority queue gqueue is : ";
    showpq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);
}
