class KthLargest {
public:
    vector<int> a;
    int x;
    KthLargest(int k, vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        for(int i=0;i<nums.size();i++)
            a.push_back(nums[i]);
        if(k<nums.size())
        {
            sort(a.begin(),a.end());
        }
        x = nums.size()-k;
    }
    
    int add(int val) {
        if(x==-1)
        {
            a.push_back(val);
            x++;
            sort(a.begin(),a.end());
            return a[x];
        }
        if(val<=a[x])
        return a[x];
        int z=0;
        for(int i=a.size()-1;i>=x;i--)
        {
            if(a[i]<val)
            {
                swap(val,a[i]);
            }
        }
        return a[x];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 **/