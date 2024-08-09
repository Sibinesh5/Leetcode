class Solution {
public:
    int magicMatrix(int x, int y, vector<vector<int>>& grid) {
        int sum2 = 0, sum3 = 0;
        vector<int> a(9, 0);
        for (int i = x - 1; i < x + 2; i++) {
            int sum = 0, n = y + 1, n1 = y - 1;
            for (int j = y - 1; j < y + 2; j++) {
                sum += grid[i][j];
                if ((grid[i][j] <=0 || grid[i][j]>=10) || a[grid[i][j] - 1] != 0)
                    return 0;
                else
                    a[grid[i][j] - 1]++;
                if (y == n) {
                    sum2 += grid[i][j];
                    n1++;
                }
                if (y == n1) {
                    sum3 += grid[i][j];
                    n1--;
                }
            }
            if (sum != 15)
                return 0;
        }

        if (sum3 != sum2 && sum2 != 15)
            return 0;
        for (int i = y - 1; i < y + 2; i++) {
            int sum = 0;
            for (int j = x - 1; j < x + 2; j++) {
                sum += grid[j][i];
            }
            if (sum != 15)
                return 0;
        }
        return 1;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int c = 0;
        for (int i = 1; i < grid.size() - 1; i++) {
            for (int j = 1; j < grid[i].size() - 1; j++) {
                cout<<i<<j;
                if (grid[i][j] == 5) {
                    c += magicMatrix(i, j, grid);
                }
            }
        }
        return c;
    }
};