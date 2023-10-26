class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {

           
                for(int j=0;j<=i;j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            
        }
    //     int col=matrix[0].size();
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<col/2;j++)
    //         {
    //             swap(matrix[i][j],matrix[i][col-1-j]);
    //         }

    //     }
        
    }
};