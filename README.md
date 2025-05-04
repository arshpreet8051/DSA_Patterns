## DSA_Patterns_
# Sliding window
- Best time to Buy and Sell Stock
- Longest Substring Without Repeating Characters
- Find All Anagrams in a String (Medium):
- Longest Repeating Character Replacement (Medium):
- SLIDING WINDOW TEMPLATE
- int left = 0;

for (int right = 0; right < n; right++) {
    // Expand the window by including s[right]
    
    // While window is invalid (based on problem logic)
    while (/* condition not satisfied */) {
        // Shrink the window from the left
        left++;
    }

    // At this point, window [left...right] is valid
    // Update your answer here if needed
}

- permutation in string
- 2090. K Radius Subarray Averages
