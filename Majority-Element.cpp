class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        n=n/2;
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>n){
                return itr->first;
            }
        }
        return -1;
    }
};