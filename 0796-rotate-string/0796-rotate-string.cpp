class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size();
        if(n!=m)return false;
        for(int i=0;i<n-1;i++){
            char first=s[0];
            if(s==goal)return true;
            for(int j=0;j<n;j++){
                s[j]=s[j+1];
            }
            s[n-1]=first;
        }
        return (s==goal);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna