class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> indices ; 
        int length, i = 0 , j, flag = 1 ;
        length = nums.size() ;
        while(i<length && flag==1)
        {
            for(j=i+1;j<length;j++)
            {
                if(target == nums[i]+nums[j])
                {
                    indices.push_back(i) ;
                    indices.push_back(j) ;
                    flag = 0 ;
                    break ;
                }
            }
            i++ ;
        }
        return indices ;
    }
};