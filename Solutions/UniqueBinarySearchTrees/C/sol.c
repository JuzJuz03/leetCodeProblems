int numTrees(int n) {
    if (n == 0 || n == 1) return 1;
    int total = 0;

    // cross every node
    for (int i = 1; i <= n;i++) {
        total = total + numTrees(i - 1) * numTrees(n - i);
    }
    return total;
}