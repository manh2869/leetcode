def generate(numRows):
    triangle = [[1]]
    for i in range(numRows - 1):
        cur = [1]
        prev = triangle[-1]
        for j in range(len(prev) - 1):
            cur.append(prev[j] + prev[j + 1])
        cur.append(1)
        triangle.append(cur)
    print(triangle)
    return triangle


generate(-1)
