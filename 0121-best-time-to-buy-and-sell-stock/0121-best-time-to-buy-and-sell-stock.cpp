class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),min=INT_MAX,minIndex=0,max=0;
        for(int i=0;i<n;i++){
            if(min>prices[i]){
                min=prices[i];
            }
            if(prices[i]-min>max){
                max=prices[i]-min;
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna