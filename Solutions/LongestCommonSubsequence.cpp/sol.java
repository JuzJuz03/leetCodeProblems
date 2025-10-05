class Solution {
    private int rec(int idx1, int idx2, String text1, String text2, int[][] dp) {
        if (idx1 == 0 || idx2 == 0) {
            return 0;
        }

        if (dp[idx1][idx2] != -1) return dp[idx1][idx2];

        if (text1.charAt(idx1 - 1) == text2.charAt(idx2 - 1)) {
            dp[idx1][idx2] = 1 + rec(idx1 - 1, idx2 - 1, text1, text2, dp);
        } else {
            dp[idx1][idx2] = Math.max(
                rec(idx1 - 1, idx2, text1, text2, dp),
                rec(idx1, idx2 - 1, text1, text2, dp)
            );
        }

        return dp[idx1][idx2];
    }

    public int longestCommonSubsequence(String text1, String text2) {
        int n1 = text1.length();
        int n2 = text2.length();

        int[][] dp = new int[n1 + 1][n2 + 1];
        for (int i = 0; i <= n1; i++) {
            for (int j = 0; j <= n2; j++) {
                dp[i][j] = -1;
            }
        }

        return rec(n1, n2, text1, text2, dp);
    }
}
