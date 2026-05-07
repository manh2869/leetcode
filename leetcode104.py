class tree:
    def __init__(self, val=0, right=None, left=None):
        self.val = val
        self.right = right
        self.left = left


def recusion(root):
    if root is None:
        return 0
    left = recusion(root.left)
    right = recusion(root.right)
    return 1 + max(left, right)


a = tree(5)
a.left = tree(2)
a.right = tree(4)
a.left.left = tree(1)
a.right.left = tree(3)
a.right.right = tree(-1)
a.left.left.left = tree(5)
a.left.left.right = tree(1)
a.right.left.right = tree(6)
a.right.right.right = tree(8)
print(recusion(a))
