class Solution:
    def romanToInt(self, s: str) -> int:
        cfg={
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000,
        }
        number=0
        i=0
        while i<len(s):
            if i+1<len(s) and cfg[s[i+1]]>cfg[s[i]]:
                number+=cfg[s[i+1]]-cfg[s[i]]
                i+=2
            else:
                number+=cfg[s[i]]
                i+=1
        return number
        
        