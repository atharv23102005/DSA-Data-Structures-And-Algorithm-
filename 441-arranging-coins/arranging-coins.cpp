class Solution {
//     int arrangeCoins(int n) {class Solution {
public:
    int arrangeCoins(int n) {
        return (sqrt(8.0 * n + 1) - 1) / 2;
    }
};

//         int l=0, h=n-1;
//         while(l<=h){
//             int mid=l+(h-l)/2;
//             if(mid==n/mid) return mid ;
//             else if (mid>n/mid) return h=mid-1;
//             else {
//                 l=mid+1;
//             }
//         }
//         return h;
//         // int  arrangeCoins(int n){

//         int arrangecoins(int n){
//             return ( sqrt(8*n+1)-1)/2;
//         }
//     }
// };