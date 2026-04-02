import tkinter as tk

nums = [6, 5, 8, 4, 1, 0, 2, 9, 3, 7]

WIDTH = 700
HEIGHT = 400

root = tk.Tk()
root.title("Merge Sort Visualization")

canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT, bg="white")
canvas.pack()

def draw_array(colors):
    canvas.delete("all")
    max_val = max(nums)
    bar_width = WIDTH // len(nums)

    for i, val in enumerate(nums):
        x0 = i * bar_width
        y0 = HEIGHT - (val / max_val) * HEIGHT
        x1 = (i + 1) * bar_width
        y1 = HEIGHT
        canvas.create_rectangle(x0, y0, x1, y1, fill=colors[i])

    root.update()

def merge_sort_visual():
    size = 1
    n = len(nums)

    while size < n:
        for left in range(0, n, 2 * size):
            mid = min(left + size - 1, n - 1)
            right = min(left + 2 * size - 1, n - 1)

            if mid < right:
                merge(left, mid, right)

        size *= 2

def merge(left, mid, right):
    left_part = nums[left:mid + 1]
    right_part = nums[mid + 1:right + 1]

    i = j = 0
    k = left

    while i < len(left_part) and j < len(right_part):
        colors = ["lightblue"] * len(nums)
        colors[k] = "yellow"
        draw_array(colors)
        root.after(300)

        if left_part[i] <= right_part[j]:
            nums[k] = left_part[i]
            i += 1
        else:
            nums[k] = right_part[j]
            j += 1
        k += 1

    while i < len(left_part):
        nums[k] = left_part[i]
        i += 1
        k += 1

    while j < len(right_part):
        nums[k] = right_part[j]
        j += 1
        k += 1

    colors = ["green" if left <= x <= right else "lightblue" for x in range(len(nums))]
    draw_array(colors)
    root.after(300)

start_btn = tk.Button(root, text="Start Merge Sort", command=merge_sort_visual)
start_btn.pack(pady=10)

draw_array(["lightblue"] * len(nums))
root.mainloop()

# To run this code type "python3.12 MS\ animation.py"