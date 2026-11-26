class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10){
            return false;
        }
        int stone = 10;
        int turn = 1;
        while(n >= stone && stone > 0){
            n -= stone;
            stone--;
            turn++;
        }
        

        return turn % 2 == 1 ? false : true;
        
    }
};