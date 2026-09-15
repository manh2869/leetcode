def maximalRectangle(heights):
    max_a = 0
    stack = []
    for i in range(len(heights)):
        while stack and heights[i] < heights[stack[-1]]:
            h = stack.pop()
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

# print(maximalRectangle([3, 1, 3, 2, 3]))

def add(matrix):
    mat = []
    for i in matrix:
        m = []
        for j in i:
            m.append(int(j))
        mat.append(m)
    for i in range(1, len(mat)):
        for j in range(len(mat[0]) ):
            if mat[i][j] == 0:
                continue
            mat[i][j] = mat[i - 1][j] + mat[i][j]
    max_area = 0
    for i in mat:
        max_area = max(maximalRectangle(i), max_area)
        print(i)
    return max_area


a = [
    ["1", "0", "1", "0", "1"],
    ["1", "0", "1", "1", "1"],
    ["1", "1", "1", "1", "1"],
    ["1", "0", "0", "1", "0"],
]


print(add(a))
