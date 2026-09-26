## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I keep a position pointer for the next non-zero element. I move all non-zero elements to the front and then fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The relative order of the non-zero elements is maintained while all zeroes are moved to the end.