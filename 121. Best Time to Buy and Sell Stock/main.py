class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        max_profit=0

        highest=prices[-1]


        for i in range(len(prices)-1,-1,-1):
            max_profit=max(max_profit,highest-prices[i])
            highest=max(highest,prices[i])


        return max_profit

        