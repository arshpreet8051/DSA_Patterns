class Solution {
    public:
        bool isPalindrome(string str) {
            int left = 0;
            int right = str.length() - 1;
    
            while (left < right) {
                // Skip non-alphanumeric characters
                while (left < right && !isalnum(str[left])) left++;
                while (left < right && !isalnum(str[right])) right--;
    
                // Convert to lowercase if needed
                char l = tolower(str[left]);
                char r = tolower(str[right]);
    
                if (l != r) return false;
    
                left++;
                right--;
            }
    
            return true;
        }
    };
    