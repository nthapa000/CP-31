#include <iostream>

class Solution {
public:
    int solve(int* arr, int n) {
        int maxZeros = 0, currZeros = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                currZeros++;
                if (currZeros > maxZeros) maxZeros = currZeros;
            } else {
                currZeros = 0; // reset count
            }
        }
        return maxZeros;
    }
};

int main() {
    int t;
    std::cin >> t;
    Solution sol;
    while (t--) {
        int n;
        std::cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        std::cout << sol.solve(arr, n) << "\n";
    }
}
