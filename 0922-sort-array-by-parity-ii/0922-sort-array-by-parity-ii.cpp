class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=1;
        while(i<n&&j<n){
            if(arr[i]%2==0)i+=2;
            else if(arr[j]%2!=0)j+=2;
            else{
                swap(arr[i],arr[j]);
                i+=2;
                j+=2;
            }
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna