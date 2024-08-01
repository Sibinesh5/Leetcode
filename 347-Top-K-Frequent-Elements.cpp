class Solution {
public:
    bool static cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        map<int, int> res;
        vector<int> a;
        for (int i = 0; i < nums.size(); i++) {
            res[nums[i]]++;
        }
        vector<pair<int, int>> b;
        for (auto i : res) {
            b.push_back(i);
        }
        sort(b.begin(), b.end(), cmp);
        for (auto i : b) {
            if (k == 0)
                break;
            a.push_back(i.first);
            k--;
        }
        return a;
    }
};