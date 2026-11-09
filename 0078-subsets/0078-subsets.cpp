class Solution {
public:
    void powerSet(int ind,vector<int>ans,vector<int>& nums,vector<vector<int>>& finalAns){
        if(ind==nums.size()){
            finalAns.push_back(ans);
            return;
        }
        powerSet(ind+1,ans,nums,finalAns);
        ans.push_back(nums[ind]);
        powerSet(ind+1,ans,nums,finalAns);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>finalAns;
        vector<int>ans;
        powerSet(0,{},nums,finalAns);
        return finalAns;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna