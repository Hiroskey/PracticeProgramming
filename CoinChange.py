class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        '''
        3 steps
        1. subproblem: opt[amount] - the fewese number of coins that form the given amount.
            opt[1] = 1
            opt[2] = 1
            opt[3] = 2
            opt[4] = 2
            opt[5] = 1
            ...
            return opt[11]

        2. recurrence relattions: opt[a] = min(opt[a-c]+1, opt[a])
            opt = [float('inf')]*x - very large number
            coins = [1, 2, 5]
            for c in coins:
                opt[5] = min(opt[5 - c] + 1, opt[5])

        3. base case: opt[5-5] = 0
            opt[0] = 0
        '''
        opt [float('inf')]*(amount+1) # 0-11 opt[11]
        opt[0] = 0

        for a in range(1, amount+1):
            for c in coins:
                if a>= c:
                    opt[a] = min(opt[a-c]+1, opt[a])
        
        return -1 if opt[amount] == float('inf') else opt[amount]