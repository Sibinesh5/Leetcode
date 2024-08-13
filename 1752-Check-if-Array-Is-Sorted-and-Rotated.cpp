class Solution {
public:
    bool check(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]-nums[i+1]>0)
            sum--;
        }
        if(nums[nums.size()-1]>nums[0])
        sum--;
        if(sum<-1)
        return false;
        else
        return true;
    }
};