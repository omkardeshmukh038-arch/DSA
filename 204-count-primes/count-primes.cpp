class Solution {
public:
    int countPrimes(int n) {
        if(n/2 < 0) return 0;

        vector<bool> prime(n+1,true);

        prime[0] = prime[1] = false;

        int count = 0;

        for(int i=2; i<n; i++){
            if(prime[i]){
                for(int j = i*2 ; j < n; j += i){
                    prime[j] = false;
                }
            }
        }

        for(int i=0; i<n ; i++){
            if(prime[i] == true){
                count++;
            }

        }

        return count;
        
    }
};