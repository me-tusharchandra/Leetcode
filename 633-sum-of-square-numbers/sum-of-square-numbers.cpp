class Solution {
public:
    bool judgeSquareSum(int c) {

        if(c==0) return true;

        int a=0;
        int b=1;

        while(a<=b){
            if(pow(a,2)+pow(b,2) == c){
                return true;
            }
            if(pow(a,2)+pow(b,2) < c){
                b++;

                // cout << "1" << a << " " << b;
            }
            if(pow(a,2)+pow(b,2) > c){
                a++;
                b--;

                // cout << "2" << a << " " << b;
            }
        }

        return false;
    }
};