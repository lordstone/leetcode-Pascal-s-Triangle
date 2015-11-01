class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        if(numRows <= 0) return arr;
        int lvl = 2;
        arr.push_back(vector<int> (1,1));
        while (lvl <= numRows){
            vector<int> lvlarr;
            for (int i = 0; i < lvl; i ++){
                int leftsum = i-1>=0 ? arr[lvl-2][i-1]:0;
                int rightsum = i < lvl-1 ? arr[lvl-2][i]:0;
                lvlarr.push_back(leftsum + rightsum);
            }//end for i
            lvl ++;
            arr.push_back(lvlarr);
        }//end while
        return arr;
    }
};
