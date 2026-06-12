def maxProfit(prices):
    sellmax = 0
    buy = float("inf")
    for i in prices:
        if i <= buy:
            buy = i
        else:
            sellmax = max(sellmax, i - buy)
    return sellmax

a = [886, 729, 539, 474, 5, 653, 588, 808, 848, 364, 819, 747]
maxProfit(a)
