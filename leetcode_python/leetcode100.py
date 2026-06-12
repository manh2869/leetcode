class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def isSameTree(p, q):
    if p == None and q == None:
        return True
    if p == None and q != None:
        return False
    if q == None and p != None:
        return False
    if p.val != q.val:
        return False
    return isSameTree(p.left, q.left) and isSameTree(p.right, q.right)

a = TreeNode(1)
a.left = TreeNode(2)
a.right = TreeNode(3)
a.left.left = TreeNode(4)
a.left.right = TreeNode(5)
a.right.right = TreeNode(7)
a.right.left = TreeNode(6)

b = TreeNode(1)
b.left = TreeNode(2)
b.right = TreeNode(3)
b.left.left = TreeNode(4)
b.left.right = TreeNode(5)
b.right.right = TreeNode(78)
b.right.left = TreeNode(6)

print(isSameTree(a, b))
