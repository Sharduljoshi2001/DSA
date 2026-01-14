#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> map;
        for (const auto& str : strs) {
            std::string key = str;
            std::sort(key.begin(), key.end());
            map[key].push_back(str);
        }

        std::vector<std::vector<std::string>> result;
        for (const auto& pair : map) {
            result.push_back(pair.second);
        }
        return result;
    }
};

void printResult(const std::vector<std::vector<std::string>>& result) {
    for (const auto& group : result) {
        std::cout << "[";
        for (size_t i = 0; i < group.size(); ++i) {
            std::cout << " " << group[i] << " ";
            if (i < group.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
}

int main() {
    Solution solution;
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> result = solution.groupAnagrams(strs);
    printResult(result);
    return 0;
}

