def setZeroes(matrix):
    row = [0 for _ in range(len(matrix))]
    col = [0 for _ in range(len(matrix[0]))]
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == 0:
                col[j] = 1
                row[i] = 1
    for i in range(len(matrix)):
        if row[i] == 1:
            for j in range(len(matrix[0])):
                matrix[i][j] = 0
    for j in range(len(matrix[0])):
        if col[j] == 1:
            for i in range(len(matrix)):
                matrix[i][j] = 0

    # print(col)
    # print(row)


a = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]
setZeroes(a)
print(a)
