#include <stdio.h>
#include <stdbool.h>

int countPrimes(int n) {
    if (n <= 1)
        return 0;
    
    bool dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = true; // Initialize all entries as prime
    }
    dp[0] = dp[1] = false; // 0 and 1 are not prime
    
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (dp[i]) {
            count++;
            for (int j = 2; j * i < n; j++) {
                dp[i * j] = false; // Mark multiples of i as non-prime
            }
        }
    }
    
    return count;
}

int main() {
    int n = 10;
    printf("Number of primes less than %d: %d\n", n, countPrimes(n));
    return 0;
}
