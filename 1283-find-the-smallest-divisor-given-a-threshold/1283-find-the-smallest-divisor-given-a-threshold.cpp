class Solution {
public:
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size(),low=1,high=INT_MIN,ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>high)high=arr[i];
        }
        while(low<=high){
            int sum=0;
            int mid=low+((high-low)/2);
            for(int i=0;i<n;i++){
                sum+=(arr[i]+mid-1)/mid;
            }
            if(sum>threshold)low=mid+1;
            else{
                ans=sum;
                high=mid-1;
            }
        }
        return low;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna