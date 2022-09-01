class Solution {
public:
 int trap(vector<int>& height){
    int left=0;
    int right=height.size()-1 ;
    int maxL = 0, maxR=0, water =0;
     while(left<right){
         if(height[left]<height[right]){
             if(maxL>height[left]) water+=maxL-height[left];
             else maxL = height[left];
            left++; 
         }else{
            if(maxR>height[right]) water+=maxR-height[right];
             else maxR = height[right];
             right--;
         }
     }
     return water ;
}};

/*            l r          
0,1,0,2,1,0,1,3,2,1,2,1
lm 3 
rm 2
ans 1 + 1 +2 +1 +1 
*/



