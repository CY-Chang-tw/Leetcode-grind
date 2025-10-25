#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false;

        std::unordered_map<int, int> hash;
        for (char i : s) {
            hash[i] += 1;
        }
        for (char i : t) {
            hash[i] -= 1;
        }
        for (auto it=hash.begin(); it!=hash.end(); it++) {
            if (it->second != 0) return false;
        }
        return true;
    }
};