class tree:
    def __init__(self, val=0, right=None, left=None):
        self.val = val
        self.right = right
        self.left = left

def iteratively(root):
    if root is None:
        return
    i=1
    stack = [root]
    while stack:
        node = stack.pop()
        i+=1
        print(i)
        # print(node.val)
        if node.right:
            stack.append(node.right)
        if node.left:
            stack.append(node.left)



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
print(iteratively(a))
