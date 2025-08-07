#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

class Solution {
public:
    std::string solve(const std::vector<int>& arr) {
        if (arr.size() == 2) return "YES";

        std::unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
            if (freq.size() > 2) return "NO";
        }

        if (freq.size() == 1) return "YES";

        auto it = freq.begin();
        int count1 = it->second; ++it;
        int count2 = it->second;
        int diff = std::abs(count1 - count2);

        return (arr.size() % 2 == 0 && diff == 0) || (arr.size() % 2 != 0 && diff == 1)
               ? "YES" : "NO";
    }
};

int main() {
    Solution sol;
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int& x : arr) std::cin >> x;
        std::cout << sol.solve(arr) << '\n';
    }
}
