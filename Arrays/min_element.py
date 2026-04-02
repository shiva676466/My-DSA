# Find the smallest element in an array

nums = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -11]
min = nums[0]
for i in nums:
    if i < min:
        min = i
print("Min is :",min)