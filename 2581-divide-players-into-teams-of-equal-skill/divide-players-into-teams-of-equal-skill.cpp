class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();

        sort(skill.begin(), skill.end());

        long ans = skill[0]*skill[n-1];
        int tmp = skill[0]+skill[n-1]; 
        

        if(n==2) return ans;

        for(int i=1; i<n/2; i++){
            // cout << i << " " << n-i-1 << " " << tmp;
            if((skill[i]+skill[n-1-i]) == tmp){
                ans += (skill[i]*skill[n-i-1]);
            }
            else{
                return -1;
            }
        }

        return ans;

    }
};