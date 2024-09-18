class Solution {
public:
    string largestNumber(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=1;j<nums.size();j++) {
                if(nums[i][0]>nums[j][0]) {
                    int x=nums[j];
                    nums[j]=nums[i];
                    nums[i]=x;
                }
            }
        }
        for(int i=0;i<size();i++) {
            cout<<nums[i]<<endl;
        }
        return \dgg\;
    }
};