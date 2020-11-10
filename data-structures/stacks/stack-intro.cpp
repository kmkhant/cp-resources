#include <bits/stdc++.h>

using namespace std;

/*
 Stacks are a type of container adaptors with LIFO(Last in First Out)
 type of working, where a new element is added at one end and (top)
 an  element is removed from that end only.
 */

// functions associated with stacks
// empty() - Returns whether the stack - Time Complexity: O(1)
// size()  - Returns the size of the stack - Time Complexity:  O(1)
// top()   - Returns a reference to the top most element of the stack
//           Time Complexity: O(1)
// push(g) - Adds the element 'g' at the top of the stack -
//           Time Complexity: O(1)
// pop()   - Deletes the top most element of the stack -
//           Time Complexity: O(1)
//           

// CPP program to demonstrate working of STL stack

void showstack(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "The stack : ";
    showstack(s);

    cout << "The size of the stack: " << s.size() << endl;
    cout << "The top of the stack : " << s.top() << endl;

    cout << "pop(): ";
    s.pop();

    showstack(s);

    return 0;
}
