class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int retVal=0;
        
        //quick sort
        std::sort(nums.begin(), nums.end());
       
        for(int i=0; i<nums.size(); i+=2) retVal += nums.at(i);
        return retVal;
    }
};
