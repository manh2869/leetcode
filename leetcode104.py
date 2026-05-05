class tree:
    def __init__(self, val=0, right=None, left=None):
        self.val = val
        self.right = right
        self.left = left


def dfs(root):
    if root == None:
        return
    print(root.val)
    dfs(root.left)
    dfs(root.right)


a = tree(9)
a.left = tree(10)
a.right = tree(11)
a.right.left = tree(12)
a.right.left.right = tree(13)
dfs(a)
