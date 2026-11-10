class Solution {
public:
    int grammer(int n, int k){
       
        if(n == 1){
            return 0;
        }

        int parent = grammer(n-1,(k+1)/2);
        if(k % 2 == 0){
            return 1 - parent;
        }
        return parent;
    }
    int kthGrammar(int n, int k) {
        
        return grammer(n,k);
    }
};