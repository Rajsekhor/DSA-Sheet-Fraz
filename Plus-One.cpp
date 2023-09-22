class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add=0;
        int n=digits.size();
        if(digits[n-1]==9){
            add=1;
            digits[n-1]=0;
        }else{
            digits[n-1]++;
        }
        for(int i=n-2;i>=0;i--){
            if(add==1){
                if(digits[i]==9){
                    add=1;
                    digits[i]=0;
                }else{
                    add=0;
                    digits[i]++;
                }
            }else{
                break;
            }
        }
        if(add==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};