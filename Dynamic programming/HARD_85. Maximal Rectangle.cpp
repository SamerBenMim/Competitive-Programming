class Solution {
public:
    int longestRec(int * t,int n){
    int left[n];
    stack<int> stack ;    
    for(int i=0 ; i<n;++i){
        if(!i){left[i]=0;stack.push(i);}
        else{
            while(!stack.empty()&&t[stack.top()]>=t[i]){
                stack.pop() ;
            }
            if(stack.empty()){left[i]=0;}
            else left[i] = stack.top()+1;
            stack.push(i);
        }
        cout<<left[i];
    }cout<<endl;
    
    int right[n];
        
      while(!stack.empty())          
    {
        stack.pop();               //Removing top element every time
    }
        cout<<"/***********************************"<<endl;
    for(int i=n-1 ; i>=0;--i){
        if(i==n-1){right[i]=n-1;stack.push(i);}
        else{
            while(!stack.empty()&&t[stack.top()]>=t[i]){
                stack.pop() ;
            }
            if(stack.empty()){right[i]=n-1;}
            else right[i] = stack.top()-1;
            stack.push(i);
        }
        cout<<right[i];  // 00 2  
    }cout<<endl;          //1 3  

        
        int ans =0;
      for(int i=0 ; i<n;++i){
          ans = max (ans,(right[i]-left[i] +1 )*t[i]);
      }

        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        int m[row][column];
        int ans = 0 ;
        for (int i=0;i<row;++i){
            for (int j=0;j<column;++j){
            m[i][j]=matrix[i][j]-'0';
            }
        }
        
        
        
        for (int i=0;i<row;++i){
            for (int j=0;j<column;++j){
                if(i){
                if(m[i][j])m[i][j]+=m[i-1][j];    
                }
            }
        }
        for (int i=0;i<row;++i){
            ans= max(longestRec(m[i],column),ans);
        }
        
        
        return ans;
    }
};

/*

1 0 1 0 0
2 0 2 1 1
3 1 3 2 2
4 0 0 3 0
// 1 
// 1 2
// left edge array  |  0 0 2 2 2
// 1 
// 2 
// right edge array  |  4 4 4 4 4
// 1 0 1 0 0
// 2 0 2 1 1
// 3 1 3 2 2
// 4 0 0 3 0
0 0 1
1 1 2

1 0 1 0 0   1
2 0 2 1 1   3
3 1 3 2 2   3    

*/