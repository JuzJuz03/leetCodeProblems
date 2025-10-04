# Two Sum — Python

Problem: Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

Approach
- Use a hash map (dictionary) to record seen values and their indices.
- For each value `v`, check if `target - v` is in the dictionary. If yes, return the pair of indices.

Time complexity: O(n)
Space complexity: O(n)

How to run
- Make sure you have Python 3 installed.
- From the `Solutions/TwoSum/Python` folder run:

```powershell
python .\solution.py
```

The script prints a few demo cases and expected outputs.
