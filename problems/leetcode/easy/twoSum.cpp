#include <iostream>
#include <vector>

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>&nums, int target) {
            int n = nums.size();
            for(int i=0; i<n; i++) {
                for(int j=0;j<n;j++) {
                    std::cout << "i: " << i << ", nums[i]: " << nums[i] << std::endl;
                    std::cout << "j: " << j << ", nums[j]: " << nums[j] << std::endl;
                if((nums[i] + nums[j]) == target) {
                    return std::vector<int> {i,j};
                } }
            }
            return std::vector<int> {};
        }
        
};

int main() {
    Solution soln;
    std::vector<int> v = {
        3,
        2,
        1,
    };
    std::cout << soln.twoSum(v,6)[0] << soln.twoSum(v,6)[1];
    return 0;
}
