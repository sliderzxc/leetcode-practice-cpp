#include <iostream>
#include "9-palindrome-number.h"

int main() {
    int number = 121211;
    Solution solution = Solution();
    bool result = solution.isPalindrome(number);
    solution.isPalindrome(result);
    std::cout << "result is - " << result;
    return 0;
}