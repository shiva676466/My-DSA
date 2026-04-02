# VSG
# Selection sort
# concept : Selection sort is a simple algorithm that works by repeatedly selecting the smallest element from the unsorted part of the array
#           and placing it at the correct position in the sorted part.
# How it works : 
# Divide the array into two parts : Sorted part(left) and unsorted part(right)
# Find the minimum element in the unsorted part
# Swap it with the first element of the unsorted part
# Move the boundary one step to the right
# Repeat until the array is sorted



# CODE : 
nums = [6, 5, 8, 4, 1, 0, 2, 99, 3, 7]
n = len(nums)
for i in range(n):
    min_idx = i 
    for j in range(i + 1, n):
         if nums[j] < nums[min_idx]:
            min_idx = j
    nums[i], nums[min_idx] = nums[min_idx], nums[i]
    
print(nums)