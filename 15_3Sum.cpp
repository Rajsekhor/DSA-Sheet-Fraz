class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            int l=i+1,h=n-1;
            while(l<h){
                if((nums[i]+nums[l]+nums[h])<0){
                    l++;
                }else if((nums[i]+nums[l]+nums[h])>0){
                    h--;
                }else{
                    ans.push_back({nums[i],nums[l],nums[h]});
                    int a=l,b=h;
                    while(l<h && nums[l]==nums[a]) l++;
                    while(l<h && nums[h]==nums[b]) h--;
                }
            }
            while(i+1 < n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};