class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int bestArea = 0;
        int maxDiagSq = 0;  // store diagonal squared

        for (auto &d : dim) {
            int l = d[0], w = d[1];
            int diagSq = l * l + w * w;
            int area = l * w;

            if (diagSq > maxDiagSq) {
                maxDiagSq = diagSq;
                bestArea = area;
            } else if (diagSq == maxDiagSq) {
                bestArea = max(bestArea, area);
            }
        }

        return bestArea;
    }
};