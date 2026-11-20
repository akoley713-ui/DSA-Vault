class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size(),low=0,high=n-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            int p=arr[mid]-(mid+1);
            if(p<k)low=mid+1;
            else high=mid-1;
        }
        return low+k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna