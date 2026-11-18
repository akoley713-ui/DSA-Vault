class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        vector<int>freq(26,0);
        int n=s.size(),max=0;
        for(int i=0;i<n;i++){
            int index=s[i]-'a';
            freq[index]++;
        }
        int index=0;
        for(int i=0;i<26;i++){
            if(freq[i]>max){
                max=freq[i];
                index=i;
            }
            
        }
        return 'a'+index;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna