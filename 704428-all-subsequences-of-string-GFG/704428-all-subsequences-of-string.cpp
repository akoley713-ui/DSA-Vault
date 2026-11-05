class Solution {
  public:
    vector<string> powerSet(string &s) {
        vector<string>ans={""};
        int n=s.size();
        for(int i=0;i<n;i++){
            int size=ans.size();
            for(int j=0;j<size;j++){
                ans.push_back(ans[j]+s[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna