# VSG
# 1.	Print each character of a string

# name = "shiva"
# for i in name :
#     print(i)

# 2.	Print string in reverse order

# name = "shiva"
# reversed_name = ""
# for char in name:
#     reversed_name = char + reversed_name               # Here each character is added in front of the string so the last character will be added at first place.    
# print(reversed_name)

# Another method :

# name = "shiva"
# print(name[::-1])

# Another method :

# name = "shiva"
# reversed_name = ""
# for i in range(len(name) - 1, -1, -1):
#     reversed_name += name[i]
# print(reversed_name)

# Another name :

# name = "shiva"
# reversed_name = ""
# i = len(name) - 1
# while i >= 0:
#     reversed_name += name[i]
#     i -= 1
# print(reversed_name)

# 3.	Count number of vowels

# name = "shiva"
# vowels = "aeiouAEIOU"
# count = 0
# for i in range(len(name)):
#     if name[i] in vowels:
#         count += 1
# print(count)

# 4.	Check if a string is palindrome

# name = "mom"
# palidrome = True
# for i in range(len(name) // 2):
#     if name[i] != name[len(name) - i - 1]:
#         palidrome = False
#         break
# if palidrome:
#     print("Palindrome")
# else :
#     print("Not a palindrome")

for iterating_var in sequence:
      statements(s)
     