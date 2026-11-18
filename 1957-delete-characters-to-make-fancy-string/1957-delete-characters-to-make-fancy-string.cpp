class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size(),j=0;
        for(int i=0;i<n;i++){
            if(j<2||s[i]!=s[j-1]||s[i]!=s[j-2]){
                s[j]=s[i];
                j++;
            }
        }
        for(int i=0;i<n-j;i++){
            s.pop_back();
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna