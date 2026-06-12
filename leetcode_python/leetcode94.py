class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def iteratively(root):
    if root is None:
        return
    stack = [root]
    while stack:
        node = stack.pop()
        print(node.val)
        if node.right:
            stack.append(node.right)
        if node.left:
            stack.append(node.left)


a = TreeNode(1)
a.left = None
a.right = TreeNode(2)
a.right.left = TreeNode(3)
iteratively(a)
