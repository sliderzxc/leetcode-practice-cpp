class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        long long temp = x;
        long long numberReversed = 0;
        while (temp != 0)
        {
            int lastNum = temp % 10;
            numberReversed = numberReversed * 10 + lastNum;
            temp /= 10;
        }

        return numberReversed == x;
    }
};
