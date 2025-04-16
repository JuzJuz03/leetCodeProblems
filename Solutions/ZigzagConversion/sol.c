char* convert(const char* s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s))
        return strdup(s);  // No zigzag needed

    int len = strlen(s);
    char** rows = (char**)malloc(numRows * sizeof(char*));
    int* row_lengths = (int*)calloc(numRows, sizeof(int));

    // Allocate enough space for each row
    for (int i = 0; i < numRows; i++) {
        rows[i] = (char*)malloc(len + 1);  // Worst case: all characters go to one row
        rows[i][0] = '\0';  // Initialize as empty string
    }

    int idx = 0;  // Current row index
    int d = 1;    // Direction (1 = down, -1 = up)

    for (int i = 0; i < len; i++) {
        char ch = s[i];
        rows[idx][row_lengths[idx]] = ch;      // Add character to the current row
        row_lengths[idx]++;
        rows[idx][row_lengths[idx]] = '\0';    // Null-terminate the string

        // Change direction at top or bottom
        if (idx == 0)
            d = 1;
        else if (idx == numRows - 1)
            d = -1;

        idx += d;
    }

    // Build the final result by concatenating all rows
    char* result = (char*)malloc(len + 1);
    int pos = 0;
    for (int i = 0; i < numRows; i++) {
        strcpy(result + pos, rows[i]);
        pos += row_lengths[i];
        free(rows[i]);  // Free memory for each row
    }

     result[len] = '\0';
    free(rows);
    free(row_lengths);
    return result;
}

