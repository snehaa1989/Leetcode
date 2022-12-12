class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> answer(numRows);

        for(int i = 0; i < numRows; i++)
        {
            answer[i].resize(i + 1);

            answer[i][0] = 1;

            for(int j = 1; j < i; j++)
            {
                answer[i][j] = (answer[i - 1][j - 1] + answer[i - 1][j]);

            }

            answer[i][i] = 1;
        }  
            

        return answer;
    }
};