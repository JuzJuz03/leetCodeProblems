#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    int left = 0;
    int map[128];
    
    for (int i = 0; i < 128; i++) {
        map[i] = -1;
    }
    
    for (int right = 0; right < n; right++) {
        char currentChar = s[right];
        if (map[currentChar] != -1) {
            left = max(left, map[currentChar] + 1);
        }
        map[currentChar] = right;
        maxLength = max(maxLength, right - left + 1);
    }
    
    return maxLength;
}