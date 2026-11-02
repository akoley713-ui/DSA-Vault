class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),i=0,j=0;
        vector<int> ans;
        while(ans.size()<n){
            while(i<n&&nums[i]<0)i++;
            if(nums[i]>0){
                ans.push_back(nums[i]);
                i++;
            }
            while(j<n&&nums[j]>0)j++;
            if(nums[j]<0){
                ans.push_back(nums[j]);
                j++;
            }
        }
        return ans;
    }
};