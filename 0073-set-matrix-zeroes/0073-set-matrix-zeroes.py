class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        m=len(matrix)
        n=len(matrix[0])
        col={}
        row={}
        for i in range (m):
            for j in range (n):
                if matrix[i][j]==0:
                        row[i]=1
                        col[j]=1
        for i in range (m):
            for j in range(n):
                if row.get(i, 0) or col.get(j, 0):
                    matrix[i][j]=0

        
        