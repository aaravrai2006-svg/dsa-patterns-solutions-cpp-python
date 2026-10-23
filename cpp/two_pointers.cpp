#include <iostream>
#include <vector>

bool hasTargetSum(const std::vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == target) return true;
        if (currentSum < target) left++;
        else right--;
    }
    return false;
}

int main() {
    std::vector<int> sortedArr = {1, 2, 4, 6, 8, 11};
    std::cout << "Target 10 found: " << (hasTargetSum(sortedArr, 10) ? "YES" : "NO") << std::endl;
    return 0;
}
