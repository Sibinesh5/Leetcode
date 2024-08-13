class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int sum=0,m=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            sum=0;
            else
            sum++;
            m=max(m,sum);
        }
        return m;
    }
};