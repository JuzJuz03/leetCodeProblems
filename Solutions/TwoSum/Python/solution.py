#!/usr/bin/env python3
"""Two Sum - Python solution

This file provides a simple, idiomatic Python implementation of the Two Sum
problem and includes a small demo in __main__ so it can be run as a smoke test.
"""
from typing import List, Optional


def two_sum(nums: List[int], target: int) -> Optional[List[int]]:
    """Return indices of the two numbers such that they add up to target.

    Uses a hash map to find the complement in O(n) time and O(n) extra space.
    Returns a list with two indices (order may vary) or None if no pair found.
    """
    seen = {}
    for i, v in enumerate(nums):
        comp = target - v
        if comp in seen:
            return [seen[comp], i]
        seen[v] = i
    return None


def _demo():
    examples = [
        (([2, 7, 11, 15], 9), [0, 1]),
        (([3, 2, 4], 6), [1, 2]),
        (([3, 3], 6), [0, 1]),
    ]

    for (nums, target), expected in examples:
        out = two_sum(nums, target)
        print(f"nums={nums}, target={target} -> {out} 	(expected {expected})")


if __name__ == "__main__":
    _demo()
