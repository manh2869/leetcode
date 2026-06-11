def searchMatrix(matrix, target):
    # mid_row = int(len(matrix) / 2)
    # if matrix[mid_row][0]<target:
    #     for i in range
    #     fas
        for i in range(len(matrix)):
            if target in matrix[i]:
                return True
        return False


searchMatrix([[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]], target=12)
