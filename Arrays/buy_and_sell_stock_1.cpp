#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_till_now = prices[0];
    int max_profit = 0;
    for (int i = 1; i < prices.size(); i++) {
        min_till_now = min(min_till_now, prices[i-1]);
        max_profit = max(max_profit, prices[i] - min_till_now);
    }
    return max_profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};  // Sample stock prices
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}
