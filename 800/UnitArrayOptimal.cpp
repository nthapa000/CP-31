#include <iostream>
#include <vector>

class Solution {
public:
    int minOp(const std::vector<int>& arr) {
        int sum = 0, negCount = 0;
        for (int num : arr) {
            sum += num;
            if (num == -1) negCount++;
        }

        int ops = 0;
        // Step 1: Fix sum to be >= 0
        while (sum < 0) {
            sum += 2; // flipping -1 to 1
            negCount--;
            ops++;
        }

        // Step 2: Fix product to be positive (even number of -1's)
        if (negCount % 2 != 0) {
            ops++;
        }
        return ops;
    }
};

int main() {
    int t;
    std::cin >> t;
    Solution sol;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        std::cout << sol.minOp(arr) << "\n";
    }
}
