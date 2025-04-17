long long comb(int n, int k) {
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}


char* kthSmallestPath(int* destination, int destinationSize, int k) {
    int v = destination[0]; // număr de V
    int h = destination[1]; // număr de H
    int total = v + h;
    char *path = malloc(total + 1);
    path[total] = '\0';

    for (int i = 0; i < total; i++) {
        if (h == 0) {
            path[i] = 'V';
            v--;
        } else if (v == 0) {
            path[i] = 'H';
            h--;
        } else {
            long long countH = comb(h + v - 1, h - 1);
            if (k <= countH) {
                path[i] = 'H';
                h--;
            } else {
                path[i] = 'V';
                v--;
                k -= countH;
            }
        }
    }

    return path;
}
