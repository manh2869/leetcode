def generateMatrix(n):
    left, right, top, bottom = 0, n - 1, 0, n - 1

    result = [[_ for _ in range(n)] for _ in range(n)]
    nums = 1
    while left < right and top < bottom:
        for i in range(left, right):
            result[top][i] = nums
            nums += 1
        top += 1
        if top >= bottom:
            break
        for i in range(top, bottom):
            result[i][right] = nums
            nums += 1
        right -= 1
        if left >= right:
            break
        for i in range(right - 1, left - 1, -1):
            result[bottom][i] = nums
            nums += 1
        bottom -= 1
        if top >= bottom:
            break
        for i in range(bottom - 1, top - 1, -1):
            result[left][i] = nums
            nums += 1
        left += 1
        if left >= right:
            break
    return result
                    # wrong answer

print(generateMatrix(3))
