class Solution:
    def totalMoney(self, n: int) -> int:
        ans = 1
        days = 1
        amt = 1
        week = 1

        while(n):
            ans+= amt 
            amt += 1

            if(days %7 == 0):
                week += 1 
                amt = week
            
            days +=1 
            n -= 1
        return ans-1 
