# VSG
# 1.Bubble sort
# Concept : Bubble sort is a simple sorting algorithm that works by repeatedly comparing adjacent elements in a list and swapping them if they are in the wrong order.
#           With each pass through the list, the largest unsorted element "bubbles" to its correct position.
# How it works : 
# start at the beginning of the list
# Compare the first two elements
# If they are in the wrong order, swap them
# Move one position forward and repeat
# After one full pass, the largest element is at the end
# Repeat the process for the remaining elements until no swaps are needed


# CODE : 
nums = [1, 2, 3, 4, 5, 9, 6, 0]
n = len(nums)
for i in range(n):
    for j in range(0, n - 1):
        if nums[j] > nums[j + 1]:
            nums[j], nums[j + 1] = nums[j + 1], nums[j]
    
print(nums)





# C++ Code (Bubble Sort)

# /*
# #include <iostream>
# #include <vector>
# using namespace std;

# int main() {
#     vector<int> nums = {1, 2, 3, 4, 5, 9, 6, 0};
#     int n = nums.size();

#     for(int i = 0; i < n; i++) {
#         for(int j = 0; j < n - 1; j++) {
#             if(nums[j] > nums[j + 1]) {
#                 swap(nums[j], nums[j + 1]);
#             }
#         }
#     }

#     for(int num : nums) {
#         cout << num << " ";
#     }

#     return 0;
# }
# */