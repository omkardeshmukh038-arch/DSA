class Solution {
public:
    int binarySearch(int low,int high,int x){
        if(low > high) return high;
        long long mid = low + (high-low)/2;
        if(mid * mid == x && mid == x/mid){
            return mid;
        }else if(mid <= x/mid){
            return binarySearch(mid+1,high,x);
        }else{
            return binarySearch(low,mid-1,x);
        }
        
    }
    int mySqrt(int x) {
        if(x==0) return 0;
        return binarySearch(1,x,x);
        
    }
};