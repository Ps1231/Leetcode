# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sameTree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not root and not subRoot:
            return True
        if root and subRoot and root.val == subRoot.val:
            return (self.sameTree(root.left, subRoot.left) and
                   self.sameTree(root.right, subRoot.right))
        return False
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not subRoot:
            return True  # An empty tree is always a subtree
        if not root:
            return False # Non-empty subRoot cannot be a subtree of an empty root
        
        # Check if the current trees are identical starting from the root of each
        if self.sameTree(root, subRoot):
            return True
        
        # Otherwise, check if subRoot is a subtree of the left or right child
        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)

        # if not root or not subRoot :
        #     return root==subroot
        # if (root.val==subRoot.val and self.isSubtree(root,subRoot)):
        #     return True
        # return self.isSubtree(root.left,subRoot) or self.isSubtree(root.right,subRoot)