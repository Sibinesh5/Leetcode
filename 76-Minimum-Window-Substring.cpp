class Solution {
public:
    string minWindow(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        map<char, int> b;
        for (int i = 0; i < t.size(); i++) {
            b[t[i]] = 1;
        }
        for (int i = 0; i < t.size(); i++) {
            b[t[i]]--;
        }
        vector<pair<char, int>> a(b.begin(), b.end());
        sort(a.begin(), a.end());
        int i = 0, j = 0, f = a.size(), m = INT_MAX, x1 = 0, x2 = 0;
        while (j <= s.size() && i <= s.size()) {
            if (f != 0) {
                for (auto& z : a) {
                    if (s[j] == z.first) {
                        if (z.second == 0)
                            f--;
                        z.second++;
                    }
                }
                j++;
            } else if (f == 0) {
                if (m > j - i) {
                    m = j - i;
                    x1 = i;
                    x2 = j;
                }
                for (auto& z : a) {
                    if (s[i] == z.first) {
                        z.second--;
                        if (z.second == 0)
                            f++;
                    }
                }
                i++;
            }
        }
        string k = s.substr(x1, x2 - x1);
        return k;
    }
};