class Solution {
public:
    int findComplement(int num) {
        ios_base::sync_with_stdio(false);
        vector<bool> ans;
        int sum = 0;
        while (num > 0) {
            int n;
            n = !(num % 2);
            ans.push_back(n);
            num /= 2;
        }
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == 1)
                sum += pow(2, i);
        }
        return sum;
    }
};