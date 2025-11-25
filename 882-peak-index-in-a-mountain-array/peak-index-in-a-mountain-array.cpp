class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0, h=n-1;
        while(l<h){
            int mid= l +(h-l)/2;
            if(arr[mid]<arr[mid+1]){
                l= mid+1 ;
            }else{
                h=mid;
            }
                   }
           return l;
    }
};