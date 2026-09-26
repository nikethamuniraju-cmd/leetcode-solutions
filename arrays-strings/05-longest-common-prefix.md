## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compare the characters of the first string with the corresponding characters of the other strings. I continue until the characters are different or one of the strings ends.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If the strings have no common starting characters, the result is an empty string.