class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        int zeros=0;
        int prod2=1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            if(nums[i]==0){
                zeros++;
            }else{
                prod2*=nums[i];
            }
        }
        if(zeros==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    ans.push_back(prod2);
                }else{
                    ans.push_back(prod);
                }
            }
        }else{
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    ans.push_back(prod/nums[i]);
                }else{
                    ans.push_back(prod);
                }
                
            }
        }
        return ans;
    }
};