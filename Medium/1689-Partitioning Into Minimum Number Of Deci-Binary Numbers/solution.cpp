class Solution {
public:
    int minPartitions(string n) {
        char mx = '0';
        for (char c : n) {
            if (c > mx) {
                mx = c;
                if (mx == '9') return 9;   
            }
        }
        return mx - '0';
    }
};