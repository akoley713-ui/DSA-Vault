class Solution {
  public:
    vector<int> getDivisors(int n) {
        vector<int>ans,temp;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                if(i!=n/i)
                temp.push_back(n/i);
            }
        }
        reverse(temp.begin(),temp.end());
        
        for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna