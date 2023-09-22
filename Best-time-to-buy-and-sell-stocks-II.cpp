class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=INT_MAX;
        int n=prices.size();
        int profit=0;
        for(int i=0;i<n;i++){
            if(lowest>prices[i]){
                lowest=prices[i];
            }
            if((prices[i]-lowest)>0){
                profit+=(prices[i]-lowest);
                lowest=prices[i];
            }
        }
        return profit;
    }
};