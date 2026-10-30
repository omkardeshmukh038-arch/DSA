class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }

        unordered_map<char,int> mp1, mp2;

        for(int i=0; i<word1.size(); i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        bool flag = true;

        
        for(auto it : mp1){
            char c = it.first;

            for(auto x : mp2){
                if(x.first == c){
                
                    flag = true;
                    break;
                }else{
                    flag = false;
                }
                
            }
            if(flag == false){
                return false;
            }
        }

        for(auto it : mp1){
          
            int freq = it.second;

            for(auto x : mp2){
                if(x.second == freq){
                    mp2[x.first] = 0;
                    flag = true;
                    break;
                }else{
                    flag = false;
                }
                
            }
            if(flag == false){
                return false;
            }
        }

        return flag;
        
    }
};