## 🧩 Roman to Integer

### **Problem Statement**

You are given a string `s` representing a Roman numeral. The task is to convert it into an integer.

Roman numerals are represented by the following symbols and their corresponding values:

| Symbol | Value |
| :----: | :---: |
|   I    |   1   |
|   V    |   5   |
|   X    |  10   |
|   L    |  50   |
|   C    |  100  |
|   D    |  500  |
|   M    | 1000  |

Roman numerals are usually written from largest to smallest (left to right).
However, certain combinations use subtraction:

- `I` before `V` or `X` → 4, 9
- `X` before `L` or `C` → 40, 90
- `C` before `D` or `M` → 400, 900

For example:

- `III` → 3
- `LVIII` → 58 (`L=50`, `V=5`, `III=3`)
- `MCMXCIV` → 1994 (`M=1000`, `CM=900`, `XC=90`, `IV=4`)

---

### **Approach**

1. **Mapping setup:**
   Define a dictionary (`cfg`) mapping Roman symbols to their integer values.

2. **Iterate through the string:**
   Use a pointer `i` to traverse each character of the string `s`.

3. **Handle subtraction cases:**
   If the current symbol is **smaller than the next symbol** (e.g., `I` before `V`),
   then it’s a subtraction case → add `(next - current)` to the total and move 2 steps ahead.

4. **Otherwise, add normally:**
   Add the value of the current symbol to the total and move 1 step ahead.

5. **Return the total sum.**

---

### **Time and Space Complexity**

- **Time Complexity:** `O(n)` — we traverse the string once.
- **Space Complexity:** `O(1)` — only a fixed-size dictionary is used.

---

### **Example**

```python
Input: s = "MCMXCIV"
Output: 1994
# Explanation:
# M (1000) + CM (900) + XC (90) + IV (4) = 1994
```

---
