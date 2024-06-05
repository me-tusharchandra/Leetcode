class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;

        unordered_map<char, int> mp1;

        for(int i=0; i<words[0].size(); i++){
            mp1[words[0][i]]++;
        }

        for(int i=1; i<words.size(); i++){
            unordered_map<char,int> mp2;

            for(int j=0; j<words[i].size(); j++){
                mp2[words[i][j]]++;
            }

            for(auto x: mp1){
                if(mp2.find(x.first) != mp2.end()){
                    mp1[x.first] = min(mp1[x.first], mp2[x.first]);
                }
                else{
                    mp1[x.first] = 0;
                }
            }
        }

        for(auto x: mp1){
            if(x.second == 1){
                ans.push_back(string(1, x.first));
            }
            else if(x.second > 0){
                while(x.second--){
                    ans.push_back(string(1, x.first));
                }
            }
            // cout << x.first << " " << x.second << endl;
        }

        return ans;
    }
};