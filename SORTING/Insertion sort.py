# VSG
# Insertion sort 
# Concept :  Insertion sort is a simple sorting algorithm that works by building the sorted array one element at a time.
# It takes an element from the unsorted part and inserts it into its correct position in the sorted part.
# This algorithm is similar to sorting playing cards in your hand.

# How it works :
# Start from the second element (index 1), assuming the first element is already sorted
# Pick the current element (called key)
# Compare the key with elements in the sorted part (to the left)
# Shift all elements greater than the key one position to the right
# Insert the key into its correct position
# Repeat until the entire array is sorted




# CODE :
nums = [12, 11, 13, 5, 6]
n = len(nums)

for i in range(1, n):           # start from second element
    key = nums[i]               # key is the element that we want to insert.
    j = i - 1

    while j >= 0 and nums[j] > key:
        nums[j + 1] = nums[j]   # shift element to the right
        j -= 1

    nums[j + 1] = key           # insert key at correct position

print(nums)