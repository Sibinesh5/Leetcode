class Solution {
public:
    void reverseString(vector<char>& s) {
        ios_base::sync_with_stdio(false);
        int x=s.size();
        for(int i=0;i<(x)/2;i++)
        {
            swap(s[i],s[x-i-1]);
        }
    }
};