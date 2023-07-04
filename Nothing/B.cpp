#include <iostream>
#include <vector>
#include <cmath>

std::pair<long long, int> calculateMaxSum(const std::vector<long long>& arr) {
    long long maxSum = 0;
    int negCount = 0;

    for (long long num : arr) {
        if (num < 0)
            negCount++;
        maxSum += std::abs(num);
    }

    if (negCount % 2 == 0)
        return std::make_pair(maxSum, 0);

    long long minAbs = INT64_MAX;
    for (long long num : arr) {
        if (num < 0)
            minAbs = std::min(minAbs, std::abs(num));
    }

    maxSum -= 2 * minAbs;
    return std::make_pair(maxSum, 1);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    std::pair<long long, int> result = calculateMaxSum(arr);
    std::cout << result.first << " " << result.second << "\n";

    return 0;
}
