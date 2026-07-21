// left run
            char ch = t[i];
            int left = 0;
            while (i < n && t[i] == ch) {
                left++;
                i++;
            }

            if (ch != '0' || i >= n) continue;

            // middle run (must be 1s)
            int mid = 0;
            while (i < n && t[i] == '1') {
                mid++;
                i++;
            }

            if (mid == 0 || i >= n) continue;

            // right run (must be 0s)
            int right = 0;
            while (i < n && t[i] == '0') {
                right++;
        while (i < n) {
                i++;
            }

            if (right > 0)
                best = max(best, left + right);

            // Don't move i back; continue scanning.
        }

        return ones + best;
    }
};