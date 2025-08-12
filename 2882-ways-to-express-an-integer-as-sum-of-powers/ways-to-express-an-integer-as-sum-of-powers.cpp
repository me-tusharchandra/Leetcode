class Solution {
public:

    int M = 1e9+7;
    int t[301][301];

    int solve(int n, int num, int x){

        if(n==0)
            return 1;

        if(n < 0)
            return 0;

        int power = pow(num, x);

        if(power > n)
            return 0;

        if(t[num][n] != -1){
            return t[num][n];
        }

        int take = solve(n-power, num+1, x);
        int skip = solve(n, num+1, x);

        return t[num][n] = (take+skip)%M;
    }

    int numberOfWays(int n, int x) {
        memset(t, -1, sizeof(t));
        return solve(n, 1, x);
    }
};