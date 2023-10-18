class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(intervals.begin(), intervals.end(),
          [](const std::vector<int>& a, const std::vector<int>& b) {
                return a[0] < b[0];
            });
        int a,b;
        a=intervals[0][0];
        b=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=b){
                b=max(b,intervals[i][1]);
            }else{
                temp.push_back(a);
                temp.push_back(b);
                ans.push_back(temp);
                temp.clear();
                a=intervals[i][0];
                b=intervals[i][1];
            }
        }
        temp.push_back(a);
        temp.push_back(b);
        ans.push_back(temp);
        return ans;
    }
};