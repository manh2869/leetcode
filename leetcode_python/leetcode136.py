def singleNumber(nums):
    ans = 0
    for i in nums:
        print(ans)
        ans ^= i
    return ans


print(singleNumber([14, 1, 2, 1, 2]))
# vai lonn bai nay khoai vcl