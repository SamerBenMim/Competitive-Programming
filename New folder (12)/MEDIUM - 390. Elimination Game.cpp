class Solution {
public:
    int lastRemaining(int n) {
        int k = n ;
        int head=1;
        int turn = 0;
        int step =1;
        while(k!=1 ){
            if(k%2 == 1) {
              head+=   step ;   
            }   
            else{
                if(turn == 0){
                      head+=   step ;    
                }
             }
            turn = ! turn ; 
            k/=2 ;
            step*=2;
            }
        
        return head;
    }
};



/*
2 4 6 -3
2(123) -3
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
  2  4  6  8  10  12  14  16  18  20
     2    6    10        14        18  
       6    14
          6
        
2* (1 2 3 4 5 6 7 8 9 10)      
2* ( 2* (1 2 3 4 5)    - 5 )   50
2*(2 *  2 *(1 2)       -2)
2*(2*2* (1) - 1 )    

 1 2 3 4 5 6 7 8 9
 2 4 6 8

 2* (1 2 3 4) 
 2* (2 ( 1 2 ) - 2)
 2* (2 *2 (1) - 1 )

2 ( 1 2 3 4 5 6 7)
2 (2 (1 2 3) ) )
2 (2 (2 1)



    15
2* 7*8/2 14
2* (2 3*4/2 -3)=
2 2 2 1
        
10
5
2
1

2 * (2 * 2 -1 )
        
  2^3 - 2

   
   9 15
   4 7
   2 3
   1 1


*/