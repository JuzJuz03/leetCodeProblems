## Approach
- Initialize a boolean array dp of size n, marking all numbers as prime (true), except for 0 and 1 which are set to false.
- Iterate through numbers starting from 2. For each prime i, mark all multiples of i as non-prime.
- Count how many numbers remain marked as prime (true).
- Return the total count of primes less than n.
