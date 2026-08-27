class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long sum = 0;
        for(int i=0; i<k; i++){
            sum += arr[i];
        }

        int low = 0;
        int high = k-1;
        double avg = 0;
        int count = 0;
        while(high < arr.size()){
            avg = sum / k;
            if(avg >= threshold){
                count+=1;
            }
            sum = sum - arr[low];
            high ++, low++;
            if(high == arr.size()) break;
            sum += arr[high];
        }
        return count;
    }
};