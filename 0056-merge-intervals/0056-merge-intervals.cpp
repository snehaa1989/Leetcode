class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // Sort intervals
        int n = intervals.size();
        vector<pair<int, int>> result;
        int k = 0;
        sort(intervals.begin(), intervals.end());
        
        for(int i = 0; i < n; i++)
        {
            int s = intervals[i][0];
            int e = intervals[i][1];
            
            if(!result.empty())
            {
                if(s <= result.back().second)
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
            
            result.push_back({s, e});
           
        }
        
        vector<vector<int>> ans(result.size());
        for(int i = 0; i < result.size(); i++)
        {
            ans[i].push_back(result[i].first);
            ans[i].push_back(result[i].second);
                
        }
    
        
        return ans;
    }
};