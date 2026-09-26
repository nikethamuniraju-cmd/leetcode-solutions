## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I use a frequency array of size 26 to count the occurrences of each lowercase letter in both strings. I increment counts for the first string and decrement them for the second; if all counts return to zero, the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Checking the string lengths first handles cases where the strings cannot possibly be anagrams.