class Solution {
public:
    vector<int> maxPrimes(int n, int s) {

        vector<bool> isPrime(n+1,true);
        vector<int> ans;

        isPrime[0] = false;
        isPrime[1] = false;

        for(long long i=2; i<=n; i++){
            if(isPrime[i]){
                ans.push_back(i);

                for(long long j = i*i;j <= n; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        vector<int> result;
        int sum = 0;
        for(int i=0; i<ans.size(); i++){
            sum += ans[i];
            if(sum <= s){
                result.push_back(ans[i]);
            }else{
                break;
            }
            
        }

        return result;
        
    }
};