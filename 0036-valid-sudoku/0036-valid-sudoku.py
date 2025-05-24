class Solution(object):
    def isValidSudoku(self, board):
        rows = defaultdict(set)
        cols = defaultdict(set)
        boxes = defaultdict(set)

        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    continue
                formula=(r//3)*3+(c//3)
                if board[r][c] in rows[r] or board[r][c] in cols[c] or board[r][c] in boxes[formula]:
                    return False
                rows[r].add(board[r][c])
                cols[c].add(board[r][c])
                boxes[formula].add(board[r][c])
        return True

        