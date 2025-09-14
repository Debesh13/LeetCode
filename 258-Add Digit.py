class Solution:
    def addDigits(self, num: int) -> int:
        ans=0
        while True:
            ans=0
            if num<10:
                return num
            for x in str(num):
                ans+=int(x)
            num=ans
