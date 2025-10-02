# 3. Longest Substring Without Repeating Characters

## Problem Statement

Given a string `s`, find the length of the longest substring without repeating characters.

### Examples

**Example 1:**
- Input: `s = "abcabcbb"`
- Output: `3`
- Explanation: The answer is "abc", with the length of 3.

**Example 2:**
- Input: `s = "bbbbb"`
- Output: `1`
- Explanation: The answer is "b", with the length of 1.

**Example 3:**
- Input: `s = "pwwkew"`
- Output: `3`
- Explanation: The answer is "wke", with the length of 3.
- Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

### Constraints

- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols and spaces.

### Difficulty
Medium

## Approach

The solution uses the **Sliding Window** technique with a hash table to efficiently find the longest substring without repeating characters.

### Algorithm:
1. Use two pointers (`left` and `right`) to maintain a sliding window
2. Use a hash table (`charMap`) to store the most recent index of each character
3. Expand the window by moving the `right` pointer and adding characters to the hash table
4. When a duplicate character is found:
   - Move the `left` pointer to the position after the previous occurrence of the duplicate character
   - This ensures no duplicates exist in the current window
5. Keep track of the maximum window size encountered

### Time Complexity: O(n)
- Each character is visited at most twice (once by `right` pointer, once by `left` pointer)

### Space Complexity: O(min(m, n))
- Where `m` is the size of the character set and `n` is the length of the string
- In the worst case, we store all unique characters in the hash table