class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n=arr.size(),i=0,j=n-1;
        while(i<j){
            if(arr[i]==arr[j]&&arr[i]==0)i++;
            else if(arr[i]==1&&arr[j]==0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            else if(arr[i]==0&&arr[j]==1){
                i++;
                j--;
            }
            else j--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna