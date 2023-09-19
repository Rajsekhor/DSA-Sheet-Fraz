#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            int y=target-x;
            if(num_map.find(y)!=num_map.end()){
                return {i,num_map[y]};
            }
            num_map[nums[i]]=i;
        }
        return {-1,-1};
    }
    
};