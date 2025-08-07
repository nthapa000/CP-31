#include <iostream>

class Solution {
public:
    bool isSubstring(const std::string& s, const std::string& x) {
        return x.find(s) != std::string::npos;
    }

    int minOperations(const std::string& s, const std::string& target) {
        std::string current = s;
        for (int ops = 0; ops <= 5; ++ops) {
            if (isSubstring(target, current)) return ops;
            current += current;
        }
        return -1;
    }
};

int main() {
    int t;
    std::cin >> t;
    Solution sol;
    while (t--) {
        int n, m;
        std::string s, target;
        std::cin >> n >> m >> s >> target;
        std::cout << sol.minOperations(s, target) << '\n';
    }
}
