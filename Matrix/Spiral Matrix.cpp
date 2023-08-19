// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:


// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> result;
        int top=0,left=0, dir=0;
        int rows = matrix.size(), cols = matrix[0].size();
        int down=rows-1;
        int  right=cols-1;
        
        if (matrix.empty() || matrix[0].empty()) 
        {
            return result;
        }
        while(left <= right && top <= down)
        {
            int i;
            if(dir==0)
            {
                for(i=left;i<=right;i++)
                {
                    result.push_back(matrix[top][i]);
                   
                } 
                top++;
            }
            else if(dir==1)
            {
                for(i=top;i<=down;i++)
                {
                    result.push_back(matrix[i][right]);
                    
                }
                right--;

            }
            else if (dir==2)
            {
                for(i=right;i>=left;i--)
                {
                    result.push_back(matrix[down][i]);
                    
                }
                down--;
            }
            else if (dir==3)
            {
                for(i=down;i>=top;i--)
                {
                    result.push_back(matrix[i][left]);
                    
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return result;

    

    }
};
