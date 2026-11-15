class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n+1,0);
        vector<int>result;
        for(int i=0;i<n;i++){
            int number=arr[i];
            ans[number]++;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==0)result.push_back(i);
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna