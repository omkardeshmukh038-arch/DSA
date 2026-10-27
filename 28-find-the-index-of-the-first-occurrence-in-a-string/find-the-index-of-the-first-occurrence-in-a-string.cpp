class Solution {
public:
    int strStr(string haystack, string needle) {
    
        // int count = 0;

        // int idx = 0;
        // bool flag = false;
        // for(int i=0; i<haystack.size(); i++){
        //     for(int j=0; j<needle.size(); j++){
        //         if(haystack[i] == needle[j]){
        //             count++;
        //             if(flag == false) idx = i;
        //             flag = true;
                    
        //             break;
        //         }else{
        //             count--;
        //         }
                
        //     }
        // }
        // if(count == needle.length()){
        //     return idx;
        // }



        int i=0;
        int j = needle.length()-1;
        while(j<haystack.length()){
            string sub = haystack.substr(i,needle.length());
            if(sub == needle){
                return i;
            }
            else{
                i++;
                j++;
            }
        }
        return -1;
    }
};