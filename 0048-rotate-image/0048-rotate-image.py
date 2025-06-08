class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n=len(matrix)

        ans= [[0 for _ in range(n)] for _ in range(n)]
        for i in range(n):
            for j in range(n):
                ans[j][n-i-1]=matrix[i][j]
        for i in range(n):
            for j in range(n):
                matrix[i][j] = ans[i][j]
        