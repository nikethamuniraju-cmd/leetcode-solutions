## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum price seen so far while checking each day's price. For every price, I calculate the possible profit and update the maximum profit if it is larger.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices keep decreasing, no profitable transaction is possible, so the maximum profit remains 0.