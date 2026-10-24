#include <vector>
#include <algorithm>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int nonZeroIdx = 0; 

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
               
                std::swap(nums[i], nums[nonZeroIdx]);
                nonZeroIdx++;
            }
        }
    }
};