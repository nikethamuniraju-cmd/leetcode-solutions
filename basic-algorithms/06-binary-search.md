## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I use two pointers, left and right, to search the sorted array. I check the middle element and reduce the search range by half depending on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works on a sorted array. If the target is not present, the function returns -1.