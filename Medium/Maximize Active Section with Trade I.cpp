char ch = t[i];
            int left = 0;
            while (i < n && t[i] == ch) {
                left++;
                i++;
            }

            if (ch != '0' || i >= n) continue;

            int mid = 0;
            while (i < n && t[i] == '1') {
                mid++;
                i++;
            }

            if (mid == 0 || i >= n) continue;

            int right = 0;
            while (i < n && t[i] == '0') {
                right++;
                i++;
            }

            if (right > 0)
                best = max(best, left + right);

        }

        return ones + best;
    }
};
        while (i < n) {