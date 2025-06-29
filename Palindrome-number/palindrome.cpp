class Solution {
  public:
      bool isPalindrome(int x) {
          // Negative numbers are not palindromes
          // Also, if a number ends with 0 but is not 0, it's not a palindrome
          if (x < 0 || (x % 10 == 0 && x != 0)) return false;
  
          int reversed = 0;
          while (x > reversed) {
              reversed = reversed * 10 + x % 10;
              x /= 10;
          }
  
          // For even-length and odd-length palindromes
          return x == reversed || x == reversed / 10;
      }
  };
  