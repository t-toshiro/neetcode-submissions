class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p=0,l=0,r=1;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profit=prices[r]-prices[l];
                max_p=max(max_p,profit);
            }else{
                l=r;
            }
            r++;
        }
       return max_p;
    }
};
