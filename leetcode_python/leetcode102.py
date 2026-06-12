from collections import deque


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def levelOrder(root):
    result = []
    queue = deque([root])
    while queue:
        cur = []
        size = len(queue)
        for _ in range(size):
            temp = queue.popleft()
            cur.append(temp.val)
            if temp.left:
                queue.append(temp.left)
            if temp.right:
                queue.append(temp.right)
        result.append(cur[:])
    return result


root = TreeNode(3)

root.left = TreeNode(9)
root.right = TreeNode(20)

root.right.left = TreeNode(15)
root.right.right = TreeNode(7)
print(levelOrder(root))
