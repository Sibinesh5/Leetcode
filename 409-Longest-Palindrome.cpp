class Solution {
public:
    int longestPalindrome(string s) {
        ios_base::sync_with_stdio(false);
        map<int, int> a;
        int count = 0, flag = 0;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] - 'a') >= 0 && (s[i] - 'a') <= 25)
                a[s[i] - 'a']++;
            else
                a[s[i] - 'A' + 26]++;
        }
        for (auto i : a) {
            if (i.second % 2 == 1) {
                count += i.second - 1;
                flag = 1;
            }
            if (i.second % 2 == 0)
                count += i.second;
        }
        if (flag)
            return count + 1;
        return count;
    }
};