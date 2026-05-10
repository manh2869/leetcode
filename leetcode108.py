class tree:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.right = right
        self.left = left


def sortedArrayToBST(nums):
    def recusion(l, r):
        if l > r:
            return None
        mid = (l + r) // 2
        tree(nums[mid])
        print(nums[mid])
        tree.left = recusion(l, mid - 1)
        tree.right = recusion(mid + 1, r)
        return tree

    return recusion(0, len(nums) - 1)


nums = [-10, -3, 0, 5, 9]
sortedArrayToBST(nums)
input()