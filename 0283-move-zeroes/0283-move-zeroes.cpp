class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        if(arr.size()==1)return;
        int n=arr.size(),i=0;
        for(int j=0;j<n;j++){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i++;
            }
        }
    }
};