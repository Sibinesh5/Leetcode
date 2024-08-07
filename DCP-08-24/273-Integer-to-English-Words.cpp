class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "Zero";
        vector<string> twos = {"",         "Eleven",  "Twelve",  "Thirteen",
                               "Fourteen", "Fifteen", "Sixteen", "Seventeen",
                               "Eighteen", "Nineteen"
                            };
        vector<string> ones = {"One", "Two",   "Three", "Four", "Five",
                               "Six", "Seven", "Eight", "Nine"
                            };
        vector<string> tens = {"Ten",   "Twenty",  "Thirty", "Forty", "Fifty",
                               "Sixty", "Seventy", "Eighty", "Ninety"
                            };
        vector<string> huns = {"Hundred", "Thousand", "Million", "Billion"};
        string s = to_string(num);
        vector<string> ans;
        reverse(s.begin(), s.end());
        int x = 1,flag=0;
        for (int i = 0; i < s.size(); i++) {
            if (i % 3 == 0) {
                if (s[i] == '0')
                    continue;
                if(flag)
                {
                ans.push_back(huns[x-1]);
                flag=0;
                }
                if (i < s.size() && s[i + 1] == '1') {
                    continue;
                } else
                    ans.push_back(ones[s[i] - '0' - 1]);
            } else if (i % 3 == 1) {
                if (s[i] == '0')
                    continue;
                if(flag)
                {
                ans.push_back(huns[x-1]);
                flag=0;
                }
                if (s[i - 1] == '0') {
                    ans.push_back(tens[s[i] - '0' - 1]);
                    continue;
                }
                if (s[i] == '1') {
                    ans.push_back(twos[s[i - 1] - '0']);
                } else
                    ans.push_back(tens[s[i] - '0' - 1]);
            } else if (i % 3 == 2) {
                if (s[i] == '0') {
                    x++;
                    flag=1;
                } else {
                    if(flag)
                    {
                    ans.push_back(huns[x-1]);
                    flag=0;
                    }
                    ans.push_back(huns[0]);
                    ans.push_back(ones[s[i] - '0' - 1]);
                    if (i < s.size() - 1 && (s[i+1]!='0'||s[i+2]!='0'||s[i+3]!='0'))
                        ans.push_back(huns[x]);
                    x++;
                }
            }
        }
        string k = "";
        for (int i = ans.size() - 1; i >= 0; i--) {
            if (i == 0) {
                k += ans[i];
                break;
            }
            k += ans[i] + " ";
        }
        return k;
    }
};