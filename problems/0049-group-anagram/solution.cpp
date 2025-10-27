#include <algorithm>
# include <iostream>
# include <vector>
# include <string>
# include <unordered_map>


class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::unordered_map<std::string, std::vector<std::string>> umap;

        for (std::string& str : strs) {
            std::string key = str;
            std::sort(key.begin(), key.end());
            umap[key].push_back(str);
        }        
        for (auto& pair : umap) {
            result.push_back(pair.second);
        }
        return result;
    }
};