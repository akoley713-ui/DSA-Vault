class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0,high=num;
        while(low<=high){
            int mid=low+((high-low)/2);
            long long square=1LL*mid*mid;
            if(square<num)low=mid+1;
            else if(square>num)high=mid-1;
            if(square==num)return true;
        }
        return false;

    // *Brute Force*

        // if(num==1)return true;
        // for(long long i=1;i<num;i++){
        //     if(i*i==num)return true;
        // }
        // return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna