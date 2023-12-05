// #include <iostream>
// #include <vector>

// int findMissingNumber(const std::vector<int>& arr) {
//     int n = 10; // The range of numbers is from 1 to 10
//     int totalSum = (n * (n + 1)) / 2; // Sum of all numbers from 1 to 10

//     int arrSum = 0;
//     for (int num : arr) {
//         arrSum += num;
//     }

//     int missingNumber = totalSum - arrSum;
//     return missingNumber;
// }

// int main() {
//     std::vector<int> numbers = {3, 1, 5, 6, 2, 9, 8, 7, 10}; // Example mixed order array

//     int missingNumber = findMissingNumber(numbers);

//     std::cout << "The missing number is: " << missingNumber << std::endl;

//     return 0;
// }
#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& nums) {
    int n = nums.size() + 1; // n is the expected size of the array
    int totalXOR = 0;
    
    for (int i = 1; i <= n; ++i) {
        totalXOR ^= i; // XOR of all numbers from 1 to n
    }
    
    int arrXOR = 0;
    for (int num : nums) {
        arrXOR ^= num; // XOR of all numbers in the array
    }
    
    int missingNumber = totalXOR ^ arrXOR;
    return missingNumber;
}

int main() {
    std::vector<int> nums = {1, 2, 4, 5, 6}; // Example array with one missing number

    int missingNumber = findMissingNumber(nums);

    std::cout << "The missing number is: " << missingNumber << std::endl;

    return 0;
}
