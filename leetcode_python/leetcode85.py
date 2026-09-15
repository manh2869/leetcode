def maximalRectangle(heights):
    max_a = 0
    stack = []
    for i in range(len(heights)):
        while stack and heights[i] > heights[stack[-1]]:
            h = stack.pop(-1)
            if stack:
                w = i - stack[-1] - 1
            else:
                w = i
            max_a = max(max_a, h * w)
        stack.append(i)
    i = len(heights)

    while stack:

        h = heights[stack.pop()]

        if stack:
            w = i - stack[-1] - 1
        else:
            w = i

        max_a = max(max_a, h * w)
    return max_a


def add(matrix):
    mat = []
    for i in matrix:
        for j in i:
            mat.append(int(j))
    return mat


a = [
    ["1", "0", "1", "0", "0"],
    ["1", "0", "1", "1", "1"],
    ["1", "1", "1", "1", "1"],
    ["1", "0", "0", "1", "0"],
]


print(add(a))
