class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def pathSum(root, targetSum):
    res = []
    Sum = []

    def dfs(root):
        if root is None:
            return
        Sum.append(root.val)
        if root.left is None and root.right is None:
            if sum(Sum) == targetSum:
                res.append(Sum[:])

        print(root.val)
        dfs(root.left)
        dfs(root.right)
        Sum.pop()

    dfs(root)
    return res


root = TreeNode(5)

root.left = TreeNode(4)
root.right = TreeNode(8)

root.left.left = TreeNode(11)

root.left.left.left = TreeNode(7)
root.left.left.right = TreeNode(2)

root.right.left = TreeNode(13)
root.right.right = TreeNode(4)

root.right.right.left = TreeNode(5)
root.right.right.right = TreeNode(1)


print(pathSum(root, 22))
