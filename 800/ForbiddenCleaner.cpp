#include <iostream>
#include <vector>

class Solution {
public:
    void isPossible(int n, int k, int x) {
        if (x != 1) {
            printYes(n, std::vector<int>(n, 1));
            return;
        }

        if (k == 1 || (k == 2 && n % 2 != 0)) {
            std::cout << "NO\n";
            return;
        }

        std::vector<int> result;
        if (n % 2 == 0) {
            result.assign(n / 2, 2);
        } else {
            result.push_back(3);
            result.insert(result.end(), (n - 3) / 2, 2);
        }
        printYes(n % 2 == 0 ? n / 2 : (n - 1) / 2, result);
    }

private:
    void printYes(int count, const std::vector<int>& nums) {
        std::cout << "YES\n" << nums.size() << "\n";
        for (int num : nums) std::cout << num << " ";
        std::cout << "\n";
    }
};

int main() {
    int t;
    std::cin >> t;
    Solution sol;
    while (t--) {
        int n, k, x;
        std::cin >> n >> k >> x;
        sol.isPossible(n, k, x);
    }
}
