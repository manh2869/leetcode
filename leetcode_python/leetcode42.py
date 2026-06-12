def trap(height):
    i, j = 0, len(height) - 1
    max_left = height[i]
    max_right = height[j]
    water = 0
    while i < j:
        if max_left <= max_right:
            water += max_left - height[i]
            i += 1
            max_left = max(max_left, height[i])
        else:
            water += max_right - height[j]
            j -= 1
            max_right = max(max_right, height[j])

    return water


height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
print(trap(height))
