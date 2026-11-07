class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size(),count=0;
        for(int i=0;i<n;i++){
            count+=arr[i][i];
        }
        for(int i=n-1;i>=0;i--){
            count+=arr[i][n-i-1];
        }
        if(m%2!=0)count-=arr[m/2][m/2];
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna