# Longest Common Subsequence

## Idea of the Solution
We solve this problem using **recursion with memoization (top-down dynamic programming)**.  
- We define `dp[i][j]` as the length of LCS of the first `i` characters of `text1` and the first `j` characters of `text2`.  
- If the last characters match, we take `1 + dp[i-1][j-1]`.  
- Otherwise, we take the maximum of `dp[i-1][j]` and `dp[i][j-1]`.

## Time and Space Complexity
- **Time Complexity:** O(n * m), where n and m are the lengths of `text1` and `text2`.  
- **Space Complexity:** O(n * m) for the memoization table.

## Edge Cases Handled
- Either of the strings is empty → returns 0.
- Strings with no common subsequence → returns 0.


| Problem ID | Problem Title | Solution | Difficulty |
|------------|---------------|----------|------------|
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | [Java Solution](https://leetcode.com/problems/longest-common-subsequence/submissions/1792249047/) | Medium |
