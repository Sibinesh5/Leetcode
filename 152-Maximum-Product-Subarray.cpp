class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        long long m1 = -999, m2 = -999, l1 = 1, l2 = 1;
        for (int i = 0, j = nums.size() - 1; i < nums.size() && j >= 0;
             i++, j--) {
            if (l1 * nums[i] > pow(2, 31) - 1 || l1 * nums[i] < -pow(2, 31))
                return max(m1, m2);
            if (l2 * nums[j] > pow(2, 31) - 1 || l2 * nums[j] < -pow(2, 31))
                return max(m1, m2);
            l1 *= nums[i];
            m1 = max(m1, l1);
            l2 *= nums[j];
            m2 = max(m2, l2);
            if (nums[i] == 0) {
                l1 = 1;
            }
            if (nums[j] == 0) {
                l2 = 1;
            }
        }
        return max(m1, m2);
    }
};