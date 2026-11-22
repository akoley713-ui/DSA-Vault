class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),count=0,count1=0,row=0;
        vector<int>ans;
        for(int i=0;i<m;i++){
            count1=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1)count1++;
                if(count1>count){
                    count=count1;
                    row=i;
                }
            }
        }
        ans.push_back(row);
        ans.push_back(count);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna