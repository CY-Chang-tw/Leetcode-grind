#include <iostream>
#include <vector>
#include <unordered_set>


class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> hash;
        for (int i : nums) {
            if (hash.find(i) != hash.end()) {
                return true;
            }
            hash.insert(i);
        }
        return false;
    }
};