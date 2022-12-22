class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // Sort intervals brute force solution
        int n = intervals.size();
        vector<pair<int, int>> result;
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        
        for(int i = 0; i < n; i++)
        {
            int s = intervals[i][0];
            int e = intervals[i][1];
            int k = ans.size();
            
            if(!ans.empty())
            {
                if(s <= ans[k - 1][1])
                {
                    continue;
                }
            }
            
            for(int j = i + 1; j < n; j++)
            {
                if(intervals[j][0] <= e)
                {
                    e = max(e, intervals[j][1]);
                }
            }
            
            ans.push_back({s, e});
           
        }
        
//         vector<vector<int>> ans(result.size());
//         for(int i = 0; i < result.size(); i++)
//         {
//             ans[i].push_back(result[i].first);
//             ans[i].push_back(result[i].second);
                
//         }
    
        
        return ans;
    }
};