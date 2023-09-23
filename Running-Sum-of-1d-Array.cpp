//Solution 1

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sumBuffer=0;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sumBuffer+=nums[i];
            ans.push_back(sumBuffer);
        }
        return ans;

    }
};

//Solution 2

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sumBuffer=0;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sumBuffer+=nums[i];
            ans.push_back(sumBuffer);
        }
        return ans;

    }
};