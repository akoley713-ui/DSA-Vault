class Solution {
public:
    vector<int> sortArray(vector<int>& arr) {
        int n=arr.size();
        if(n<=1)return arr;
        vector<int>a(n/2);
        vector<int>b(n-n/2);
        int index=0;
        for(int i=0;i<n/2;i++){
            a[i]=arr[index++];
        }
        for(int i=0;i<n-n/2;i++){
            b[i]=arr[index++];
        }
        a=sortArray(a);
        b=sortArray(b);
        int i=0,j=0;
        vector<int>merged;
        while(i<a.size()&&j<b.size()){
            if(a[i]<b[j]){
                merged.push_back(a[i]);
                i++;
            }
            else{
                merged.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            merged.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            merged.push_back(b[j]);
            j++;
        }
        return merged;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna