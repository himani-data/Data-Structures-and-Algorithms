class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  // Negative numbers are not palindromes

        long long rev = 0;        // Use long long to prevent overflow
        int original = x;

        while (x > 0) {
            int last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;
        }

        return (rev == original);
    }
};
