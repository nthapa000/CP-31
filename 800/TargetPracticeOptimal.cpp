#include <iostream>
#include <cmath>

class Solution {
public:
    int calculatePoints(char board[10][10]) {
        int totalPoints = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (board[i][j] == 'X') {
                    int layer = std::min(std::min(i, 9 - i), std::min(j, 9 - j));

                    totalPoints += layer + 1;
                }
            }
        }
        return totalPoints;
    }
};

int main() {
    Solution sol;
    int t;
    std::cin >> t;

    while (t--) {
        char board[10][10];
        for (int i = 0; i < 10; ++i)
            for (int j = 0; j < 10; ++j)
                std::cin >> board[i][j];

        std::cout << sol.calculatePoints(board) << '\n';
    }
}
