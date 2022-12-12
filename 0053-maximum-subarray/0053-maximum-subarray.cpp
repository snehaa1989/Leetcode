class Solution {
public:
    int maxSubArray(vector<int>& nums) {
             int maximum = nums[0];
    int counter = 0;
    for(int i:nums){
        counter = i >= counter+i ?  i : counter +i;
        maximum = maximum > counter ? maximum : counter;
    };
    return maximum;
    }
};