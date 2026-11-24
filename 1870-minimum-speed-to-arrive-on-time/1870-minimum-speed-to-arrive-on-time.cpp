class Solution {
public:
    int minSpeedOnTime(vector<int>& arr, double hour) {
        int n=arr.size(),low=1,high=10000000,ans=-1;
        while(low<=high){
            double sum=0;
            int mid=low+((high-low)/2);
            for(int i=0;i<n-1;i++){
                if(arr[i]%mid==0)sum+=arr[i]/mid;
                else sum+=(arr[i]/mid)+1;
            }
            if(sum+(double)arr[n-1]/mid>hour)low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna