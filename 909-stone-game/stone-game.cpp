class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(),piles.end());

        int alice = 0;
        int bob = 0;

        for(int i = piles.size()-1; i>=0; i -= 2){
            alice += piles[i];
        }
        for(int i=piles.size()-2; i>=0 ; i-= 2){
            bob += piles[i];
        }

        if(alice > bob){
            return true;
        }

        return false;
    }
};