class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end()) ;
        int sum = prices[0] + prices[1] ;

        return (money-sum) <0 ? money : (money -sum) ;
    }
};