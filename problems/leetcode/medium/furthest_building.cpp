#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int furtherestBuilding(vector<int>& heights, int bricks, int ladders) {
           for(int i=0;i<heights.size();i++) {
            if((heights[i] > heights[i+1]) || (heights[i] == heights[i+1])) {
                continue;
            }
            else {
                if(bricks > 0) {
                    // calcuate bricks
                    bricks = heights[i] - heights[i+1];
                    if(bricks > 0) {
                        continue;
                    } else {
                        // calculate ladder
                        if(ladders < 1) {
                            // stop if ladder is 0
                            return i+1;
                        }
                        else {
                            // go if still have ladders
                            ladders--;
                            continue;
                        }
                    }
                    } else {
                        // calculate ladder
                        if(ladders < 1) {
                            return i+1;
                        }
                        else {
                            ladders--;
                            continue;
                        }
                    }
                }
            }
           }
        };

int main() {
   vector<int> heights = {4,12,2,7,3,18,20,3,19};
   Solution soln;
   cout << soln.furtherestBuilding(heights, 10, 2);
}
