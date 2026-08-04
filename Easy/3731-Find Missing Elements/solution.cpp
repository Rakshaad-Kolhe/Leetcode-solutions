class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;
            if (idx >= 0 && idx < nums.size()) {
                if (nums[idx] > 0)
                    nums[idx] = -nums[idx];
    }
}

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;
    }
};