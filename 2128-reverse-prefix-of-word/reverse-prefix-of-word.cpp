class Solution {
public:
    string reversePrefix(string word, char ch) {

        string str = "";
        int index = 0;

        for(int i=0; i<word.length(); i++){
            if(word[i] == ch){
                index = i;
                break;
            }
        }

        // cout << index;

        for(int i=index; i>=0; i--){
            str += word[i];
        }

        for(int i=index+1; i<word.length(); i++){
            str += word[i];
        }

        return str;
    }
};