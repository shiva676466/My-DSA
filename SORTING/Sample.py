# 1.	Find the maximum element in an array

# nums = [1, 2, 3, 4, 5, 6, 0]
# max = nums[0]
# for i in range(len(nums)):
#     if nums[i] > max:
#         max = nums[i]
# print(max)

# 2.	Find the minimum element

# nums = [1, 2, 3, 4, 5, 6, 0]
# min = nums[0]
# for i in range(len(nums)):
#     if nums[i] < min:
#         min = nums[i]
# print(min)

# 3.	Count how many elements are even

# nums = [1, 2, 3, 4, 5, 6, 8]
# even_count = 0
# for i in range(len(nums)):
#     if nums[i] % 2 == 0:
#         even_count += 1
# print(even_count)

# 4.	Count how many elements are odd

# nums = [1, 2, 3, 4, 5, 6, 8]
# odd_count = 0
# for i in range(len(nums)):
#     if nums[i] % 2 != 0:
#         odd_count += 1
# print(odd_count)

# 5.	Reverse an array

# nums = [1, 2, 3, 4, 5]
# n = len(nums)
# for i in range(n // 2):
#     nums[i], nums[n - i - 1] = nums[n - i - 1], nums[i]
# print(nums)

# 6.	Check if an array is sorted

# nums = [1, 2, 3, 4, 5]
# s = True
# for i in range(len(nums) - 1):
#     if nums[i] > nums[i + 1]:
#         s = False
#         break
# if s:
#     print("sorted")
# else :
#     print("Not sorted")

# 7.	Find the sum of all elements

# nums = [1, 2, 3, 4, 5, -1]
# addition = 0
# for i in nums :
#     addition += i
    
# print(addition)

# 8.	Print elements at even indices

# nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, -1]
# even = []
# for i in range(len(nums)):
#     if i % 2 == 0 and i != 0:
#         even.append(nums[i])
        
# print(even)

# 9.	Print elements at odd indices

# nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, -1]
# odd = []
# for i in range(len(nums)):
#     if i % 2 != 0 and i != 0:
#         odd.append(nums[i])
        
# print(odd)

# 10.	Replace all negative numbers with 0

# nums = [1, 2, -3, 4, -5, 6, -7, 8, 9]
# for i in range(len(nums)):
#     if nums[i] < 0:
#         nums[i] = 0
# print(nums)

# 1.	Check if array is already sorted

# nums = [1, 2, 3, 4, 0, 5, 6 ]
# is_sorted = True
# for i in range(len(nums) - 1):
#     if nums[i] > nums[i + 1]:
#         is_sorted = False
#         break
        
# if is_sorted :
#     print("Sorted")
# else :
#     print("Not sorted")

# 2.	Find minimum & maximum in one traversal

# nums = [1, 2, 3, 4, 5]
# largest = nums[0]
# smallest = nums[0]
# for i in range(len(nums)):
#     if nums[i] < smallest:
#         smallest = nums[i]
#     elif nums[i] > largest:
#         largest = nums[i]
# print(f"Largest : {largest}")
# print(f"Smallest : {smallest}")

# 3.	Find second largest element

# nums = [5, 1, 4, 2]
# largest = nums[0]
# sec_lar = -1
# for i in range(1, len(nums)):
#     if nums[i] > largest :
#         sec_lar = largest
#         largest = nums[i]
#     elif nums[i] < largest and nums[i] > sec_lar:
#         sec_lar = nums[i]
# print(sec_lar)

# 4.	Sort array of 0s and 1s

# nums = [0, 1, 0, 0, 1]
# zero = []
# ones = []
# for i in range(len(nums)):
#     if nums[i] == 0:
#         zero.append(nums[i])
#     else :
#         ones.append(nums[i])
# nums = zero + ones
# print(nums)

# 5.	Sort array of 0s, 1s, 2s (conceptually)

# nums = [1, 2, 2, 1, 0, 0, 1, 0, 2, 1, 0]
# zero, one, two = [], [], []
# for i in range(len(nums)):
#     if nums[i] == 0:
#         zero.append(nums[i])
#     elif nums[i] == 1:
#         one.append(nums[i])
#     else :
#         two.append(nums[i])
# nums = zero + one + two
# print(nums)

# 6.	Count number of swaps in Bubble Sort

# nums = [4, 3, 2, 1, 6, 5]
# n = len(nums)
# count = 0
# for i in range(n):
#     for j in range(n - 1 - i):
#         if nums[j] > nums[j + 1]:
#             nums[j], nums[j + 1] = nums[j + 1], nums[j]
#             count += 1
# print(nums)
# print(count)

# 7.	Sort only first k elements

# nums = [3, 2, 1, 0, 6, 8, 4]
# k = 4
# for i in range(k):
#     min_idx = i
#     for j in range(i + 1,k):
        # if nums[j] < nums[min_idx]:                       # using selection sort
#             min_idx = j
#     nums[i], nums[min_idx] = nums[min_idx], nums[i]
        
# print(nums)

# 8.	Sort array in descending order

# nums = [1, 2, 3, 4, 5, 8, 7, 6]
# for i in range(len(nums)):
#         for j in range(len(nums) - i - 1):
#                 if nums[j] < nums[j + 1]:
#                         nums[j], nums[j + 1] = nums[j + 1], nums[j]
# print(nums)
