class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def hasPathSum(root, targetSum):
    Sum = []

    def dfs(root):
        if root is None:
            return False        # ?
        if root.left is None and root.right is None:
            if sum(Sum) == targetSum:
                return True
        Sum.append(root.val)
        if dfs(root.left) or dfs(root.right):
            return True
        Sum.pop()
        return False

    return dfs(root)


root = TreeNode(5)

root.left = TreeNode(4)
root.right = TreeNode(8)

root.left.left = TreeNode(11)

root.right.left = TreeNode(13)
root.right.right = TreeNode(4)

root.left.left.left = TreeNode(7)
root.left.left.right = TreeNode(2)

root.right.right.right = TreeNode(1)
print(hasPathSum(root, 22))
