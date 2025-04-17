# K-th Smallest Lexicographical Path

## Problem Description

You are given a grid with dimensions defined by a destination point `[row, column]`. Starting at the origin `(0, 0)`, you can only move **right ('H')** or **down ('V')**. Your task is to find the **k-th lexicographically smallest path** that leads to the destination.

## Example

Input:
```c
destination = [2, 3]  // 2 vertical moves, 3 horizontal moves
k = 4
```

Output:
```
"HVHHV"
```

## Total Number of Paths

To reach a point `(v, h)`, where:
- `v` is the number of vertical steps (`V`),
- `h` is the number of horizontal steps (`H`),

you need to construct a string of length `v + h` that consists of exactly:
- `v` occurrences of `'V'`,
- `h` occurrences of `'H'`.

The total number of such unique paths is given by the combination formula:

\[
C(v + h, h) = \frac{(v + h)!}{v! \cdot h!}
\]

This represents the number of ways to arrange `h` H's among `v + h` total steps.

---

## Approach: Combinatorial Logic

We want to construct the k-th lexicographical string, step by step. At every step, we decide whether to place an `'H'` or a `'V'` next.

### Lexicographical Order

- `'H'` comes before `'V'` in lexicographical order.
- So, in order to build the smallest string, we prefer `'H'` whenever possible.

### Recursive Logic

At each position in the result string:
1. We try placing `'H'`. 
   - If we do this, the remaining number of valid paths is `C(v + h - 1, h - 1)`.
   - If `k` is **less than or equal to** this value, then we know the desired path starts with `'H'`.
2. Otherwise, we place `'V'`, reduce `k` accordingly (since we skipped over the paths that started with `'H'`), and continue.

This process repeats until all steps are placed.

---
