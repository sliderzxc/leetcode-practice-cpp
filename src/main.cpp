#include <iostream>
#include "9-palindrome-number.cpp"

int main() {
    int number = 12121;
    Solution solution = Solution();
    bool result = solution.isPalindrome(number);
    solution.isPalindrome(result);
    std::cout << "result is - " << result;
    return 0;
}