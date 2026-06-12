class tree:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def isSymmetric(root):
    def check(p, q):
        if p == None and q == None:
            return True
        if p == None and q != None:
            return False
        if p != None and q == None:
            return False
        if p.val != q.val:
            return False
        return check(p.left, q.right) and check(p.right, q.left)

    return check(root.left, root.right)


a = tree(1)
a.left = tree(2)
a.left.left = tree(3)
a.left.right = tree(4)
a.right = tree(2)
a.right.left = tree(4)
a.right.right = tree(3)
print(isSymmetric(a))
