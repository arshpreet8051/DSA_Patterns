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
- K Radius Subarray Averages
- Plus One


- Fast and slow pointers - observation - “When deleting or inserting near the head of a linked list — add a dummy node pointing to head. It makes the head just another node to handle.”
- LL - Dummy node before head - to handle case if operation is to be done on head itself

- Iterative one-pass sublist reversal wihtout extra space HEAD INSERTION

  
for (int i = 0; i < right - left; ++i) {
            reverseStart->next = curr->next;
            curr->next = prev->next;
            prev->next = curr;
            curr = reverseStart->next;
        }


### Monotonic Stack

- When you need to compare each element to the right or left, think monotonic stack.

- When asked for "next/previous greater/smaller", monotonic stack is usually the best choice.

- Useful in reducing nested loops → linear time solutions.
  

1. Next Greater/Smaller Element
2. Previous Greater/Smaller Element
3. Range or Window Problems
4. Sliding Window Min/Max (Monotonic Queue)
5. Temperature or Span-Based Problems
6. General Template for Monotonic Stack


let stack = [];  // stores index or value depending on need

for (let i = 0; i < n; i++) {
    while (stack.length && condition(stack[stack.length - 1], arr[i])) {
        // do something like update result
        stack.pop();
    }
    stack.push(i);
}
