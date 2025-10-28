# include <iostream>
# include <vector>
# include <unordered_map>



class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int, int> umap;
        std::vector<std::vector<int>> bucket(n + 1); 
        for (int n : nums) {
            umap[n] += 1;
        }
        for (auto const& [num, freq] : umap) {
            bucket[freq].push_back(num);
        }
        std::vector<int> result;
        for (int i=bucket.size()-1; i>=1; i--) {
            if (!bucket[i].empty()) {
                for (int n : bucket[i]) {
                    result.push_back(n);
                }
            }
            if (result.size() == k) {
                return result;
            }
        }
        return result;
    }
};