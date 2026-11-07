class Solution {
  public:
    int countZeros(vector<vector<int>>& arr) {
        int m=arr.size(),count=0;
        int i=m-1,j=0;
        while(i>=0&&j<m){
            if(arr[i][j]==1){
                i--;
            }
            else{
                count+=i+1;
                j++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna