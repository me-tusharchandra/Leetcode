class Solution {
public:

    string stemmer(string &word, unordered_set<string> &st){

        for(int i=1; i<word.size(); i++){
            string root = word.substr(0, i);

            if(st.find(root) != st.end()){
                return root;
            }
        }

        return word;
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        
        unordered_set<string> st(dictionary.begin(), dictionary.end());

        stringstream ss(sentence);

        string word, result;

        while(getline(ss, word, ' ')){
            
            result += stemmer(word, st) + " ";

        }

        result.pop_back();
        
        return result;
    }
};