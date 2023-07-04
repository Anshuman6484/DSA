#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, K;
        std::cin >> N >> K;

        // Decide whether to play as Alice or Bob
        std::string player;
        if ((N / K) % 2 == 0) {
            player = "Bob";
        } else {
            player = "Alice";
        }
        std::cout << player << std::endl;

        int remainingStones = N;

        while (true) {
            if (player == "Alice") {
                // Alice's turn
                int x = remainingStones % K;
                if (x == 0) {
                    x = K;
                }
                std::cout << x << std::endl;
            } else {
                // Bob's turn
                int stonesRemoved;
                std::cin >> stonesRemoved;
                remainingStones -= stonesRemoved;
            }

            if (remainingStones <= 0) {
                break;
            }

            // Switch player
            player = (player == "Alice") ? "Bob" : "Alice";
        }

        int judgeResult;
        std::cin >> judgeResult;

        if (judgeResult == -1) {
            // Game ended, and you lost
            break;
        }
    }

    return 0;
}
