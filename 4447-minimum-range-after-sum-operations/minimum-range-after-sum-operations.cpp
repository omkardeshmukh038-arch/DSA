class Solution {
public:
    int minRange(int a, int b, int c) {
        int ans = max(a,max(b,c))-min(a,min(b,c)) ;
        if(a > b+c){
            a = b + c;
            ans = min(max(a,max(b,c))-min(a,min(b,c)),ans);
        }
        if(b > a + c){
            b = a+c;
            ans = min(max(a,max(b,c))-min(a,min(b,c)),ans);

        }
        if(c > a + b){
            c = a+b;
            ans = min(max(a,max(b,c))-min(a,min(b,c)),ans);

        }

        return ans;
        
    }
};