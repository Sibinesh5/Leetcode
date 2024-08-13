class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(), arr[n];
        k = k % nums.size();
        for (int i = n - k; i < nums.size(); i++) {
            arr[i - (n - k)] = nums[i];
        }
        for (int i = 0; i < n - k; i++) {
            arr[i + k] = nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = arr[i];
        }
    }
};