def minimumCost(cost):
    #  less than or equal to the minimum
    cost.sort(reverse=True)
    Sum = 0
    for i in range(len(cost)):
        if i % 3 != 2:
            Sum += cost[i]
            print(i, Sum)

    return Sum
    # vi sao anh quay buoc bo em noi nay


print(minimumCost([1, 2, 2, 5, 6, 7, 9]))
