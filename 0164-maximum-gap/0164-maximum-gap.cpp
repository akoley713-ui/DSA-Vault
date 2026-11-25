class Solution {
public:
    void mergeSort(vector<int>& arr1){
        int m=arr1.size();
        if(m<=1)return;
        vector<int>a(m/2);
        vector<int>b(m-m/2);
        int index=0;
        for(int i=0;i<m/2;i++){
            a[i]=arr1[index++];
        }
        for(int i=0;i<m-m/2;i++){
            b[i]=arr1[index++];
        }
        mergeSort(a);
        mergeSort(b);
        vector<int>merged;
        int i=0,j=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]<b[j]){
                merged.push_back(a[i]);
                i++;
            }
            else {
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
        arr1=merged;
    }
    int maximumGap(vector<int>& arr){
        int n=arr.size();
        if(n<2)return 0;
        mergeSort(arr);
        int diff=0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>diff)diff=arr[i+1]-arr[i];
        }
        return diff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna