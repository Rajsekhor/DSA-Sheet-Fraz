class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int zero=0;
        for (int i=0;i<n;i++) {
            if(nums[i]==0){
                zero++;
            }else{
                nums[i-zero]=nums[i];
            }
        }
        for(int i=n-1;i>n-zero-1;i--){
            nums[i]=0;
        }
    }
};