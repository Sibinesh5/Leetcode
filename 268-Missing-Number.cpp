class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int sum = ((nums.size()) * (nums.size() + 1)) / 2, sum1 = 0;
        for (int i = 0; i < nums.size(); i++)
            sum1 += nums[i];
        return sum - sum1;
    }
};