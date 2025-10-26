# include <iostream>
#include <utility>
# include <vector>
# include <unordered_map>


class Solution {
public: 
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> umap;
        for (int i=0; i<nums.size(); i++) {
            if (umap.find(target - nums[i]) != umap.end()) {
                return std::vector<int>{umap[target - nums[i]], i};
            }
            else {
                umap.insert(std::pair<int, int>(nums[i], i));
            }
        }
        return {};
    }
};