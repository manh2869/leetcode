def getCommon(nums1, nums2):
    i = 0
    j = 0
    while i < len(nums1) and j < len(nums2):
        if nums1[i] < nums2[j]:
            i += 1
        elif nums1[i] > nums2[j]:
            j += 1
        else:
            return nums1[i]

    return -1


nums1 = [34, 225, 328, 530, 823, 834, 902, 989]
nums2 = [
    24,
    30,
    115,
    121,
    160,
    173,
    239,
    265,
    335,
    362,
    449,
    557,
    597,
    624,
    697,
    766,
    775,
    881,
    898,
    919,
]

print(getCommon(nums1, nums2))
