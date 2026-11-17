class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m=s.size();
        vector<int> arr1(256,-1);
        vector<int> arr2(256,-1);
        for(int i=0;i<m;i++){
            arr1[s[i]]=t[i];
            arr2[t[i]]=s[i];
        }
        for(int i=0;i<m;i++){
            if(arr1[s[i]]!=-1&&arr1[s[i]]!=t[i])return false;
            if(arr2[t[i]]!=-1&&arr2[t[i]]!=s[i])return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna