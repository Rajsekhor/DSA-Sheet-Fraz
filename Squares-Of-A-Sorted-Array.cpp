class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sq.push_back(nums[i]*nums[i]);
        }
        sort(sq.begin(),sq.end());
        return sq;
    }
};