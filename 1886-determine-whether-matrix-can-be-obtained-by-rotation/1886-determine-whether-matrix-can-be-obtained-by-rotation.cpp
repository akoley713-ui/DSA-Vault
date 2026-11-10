class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        if(mat==target)return true;
        for(int k=0;k<3;k++){
            vector<vector<int>>ans(n,vector<int>(n,0));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans[j][n-1-i]+=mat[i][j];
                }
            }
            if(ans==target)return true;
            mat=ans;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna