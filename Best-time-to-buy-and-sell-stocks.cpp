class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int lowest=INT_MAX,profit=0;
        for(int i=0;i<n;i++){
            if(lowest>prices[i]){
                lowest=prices[i];
            }
            if((prices[i]-lowest)>profit){
                profit=prices[i]-lowest;
            }
        }
        return profit;
    }
};