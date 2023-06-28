// Question
// Suppose you would like to find kth largest number from group of N numbers

#include <iostream>
#include <vector>
#include <algorithm>

// Solutions
// One of the initial solutions that often comes to mind is to sort the N numbers in an array
// and then find the kth largest number by locating the kth position number from the last index of the array.
// This approach mirrors the manual process we might follow to identify the kth largest number.
// Although it is straightforward to understand and implement, it may not be the most efficient approach for larger datasets.
// The sorting operation itself can be costly, especially for large arrays or frequent queries for different k values.
// Therefore, it's worth exploring alternative algorithms that can find the kth largest element more efficiently.
// Let's solve this by brute force first

int findKthLargestSort(const std::vector<int>& nums, int k){
    // Sort the numbers in descending order
    std::vector<int> sortedNums = nums;
    std::sort(sortedNums.begin(), sortedNums.end(), std::greater<int>());

    // Return the kth largest element
    return sortedNums[k - 1];
}

int main() {
    // case-1 (10 numbers)
    std::vector<int> tc1_numbers = {9, 2, 5, 1, 8, 3, 11, 16, 4, 21};
    int tc1_k = 6;

    // Solution-1 Brute force
    int kthLargestSort = findKthLargestSort(tc1_numbers, tc1_k);
    std::cout << "The " << tc1_k << "th largest element is: " << kthLargestSort << std::endl;
    return 0;
}

