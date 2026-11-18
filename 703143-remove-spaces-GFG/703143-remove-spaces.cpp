class Solution {
  public:
    string removeSpaces(string& s) {
        int n=s.size(),j=0;
        // while(j<n){
        //     if(s[j]==' ')s.erase(j,1);
        //     else j++;
        // }
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                swap(s[i],s[j]);
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