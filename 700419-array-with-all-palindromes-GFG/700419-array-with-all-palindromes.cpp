class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int test=arr[i];
            int rev=0;
            while(test>0){
                rev=(rev*10)+test%10;
                test/=10;
            }
            if(rev!=arr[i])return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna