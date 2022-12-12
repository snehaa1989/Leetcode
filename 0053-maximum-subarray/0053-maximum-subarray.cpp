class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maximum = INT_MIN;
        
        int counter = 0;
        
        if(nums.size() == 1) return nums[0];
        
        for(auto i : nums)
        {
           
            
            if(counter < 0)
            {
                counter = 0;
                
            }
            
            counter += i;
            
            if(maximum < counter)
            {
                maximum = counter;
            }
            
        }
        
        return maximum;
            
    }
};