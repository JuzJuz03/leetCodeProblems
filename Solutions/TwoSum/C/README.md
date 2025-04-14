## Approach
- A custom struct Number is used to store both the value and original index of each number from the input array.
- The array is then sorted using bubble sort based on the values.
- A two-pointer technique is applied:
- One pointer starts at the beginning (left), and one at the end (right) of the sorted array.
- The loop moves the pointers inward until a pair is found such that value[left] + value[right] == target.
- The original indices of the two numbers that sum up to the target are stored in a dynamically allocated result array and returned.
