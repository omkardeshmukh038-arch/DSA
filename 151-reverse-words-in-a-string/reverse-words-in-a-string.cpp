class Solution {
public:
    string reverseWords(string s) {
        string answer;
        string temp;
        int R = s.length()-1;
        bool flag = false;
        while(R >= 0){

            if(s[R] == ' ' && flag == true){
                
                reverse(temp.begin(),temp.end());
                temp.push_back(' ');
                answer += temp;
                temp = ""; 
                flag = false;               
            }

            if(s[R] != ' '){
                flag = true;
                temp.push_back(s[R]);
            }
            R--;            
        }
        if(temp != " "){
            reverse(temp.begin(),temp.end());
            temp.push_back(' ');
            answer += temp;
        }

        int low = 0,high = answer.size()-1;
        while(answer[low] == ' '){
            low++;
        }
        while(answer[high] == ' '){
            high--;
        }
        return answer.substr(low,high-low +1);
    }
};