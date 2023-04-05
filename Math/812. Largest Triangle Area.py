class Solution:
    def area(self, a:List[int],b:List[int],c:List[int]) ->float: 
        return 0.5* abs(a[0]*(b[1]-c[1]) + b[0]*(c[1]-a[1])+ c[0]*(a[1]-b[1])) 
    def largestTriangleArea(self, points: List[List[int]]) -> float:
        ans = 0
        for i in range(0,len(points)):
            for j in range(0,len(points)):
                for k in range(0,len(points)):  
                    ans = max(ans,self.area(points[i],points[j],points[k]))     

        return ans
