## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I use a stack to store opening brackets. When a closing bracket is found, I check whether it matches the most recent opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The stack becomes empty only when all brackets are correctly matched and closed.