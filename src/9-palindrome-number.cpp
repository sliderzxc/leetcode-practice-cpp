#include "9-palindrome-number.h"
#include <iostream>

bool Solution::isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int temp = x;
    int numberReversed = 0;
    while (temp != 0) {
        int lastNum = temp % 10;
        numberReversed = numberReversed * 10 + lastNum;
        temp /= 10;
    }

    return numberReversed == x;
}
