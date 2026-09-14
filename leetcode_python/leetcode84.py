def largestRectangleArea( heights):
    max_a=0
    i=0
    while i<len(heights):
        l=i-1
        r=i+1
        while l>=0 and heights[i]<=heights[l]:
            l=l-1
        while r<len(heights) and heights[i]<=heights[r]:
            r=r+1
        max_a=max(max_a,heights[i]*(r-l-1))
        i+=1
    return max_a