class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),count=0;
        int i=m-1,j=0;
        while(i>=0&&j<n){
            if(grid[i][j]>=0)j++;
            else{
                count+=(n-j);
                i--;
            }

        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna