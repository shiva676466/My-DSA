import tkinter as tk
import time

# Array to sort
nums = [6, 5, 8, 4, 1, 0, 2, 9, 3, 7]

# GUI settings
WIDTH = 600
HEIGHT = 400
BAR_WIDTH = WIDTH // len(nums)

root = tk.Tk()
root.title("Selection Sort Visualization")

canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT, bg="white")
canvas.pack()

def draw_array(colors):
    canvas.delete("all")
    max_val = max(nums)

    for i, val in enumerate(nums):
        x0 = i * BAR_WIDTH
        y0 = HEIGHT - (val / max_val) * HEIGHT
        x1 = (i + 1) * BAR_WIDTH
        y1 = HEIGHT

        canvas.create_rectangle(x0, y0, x1, y1, fill=colors[i])
        canvas.create_text(x0 + BAR_WIDTH / 2, y0 - 10, text=str(val))

    root.update_idletasks()

def selection_sort_visual():
    n = len(nums)

    for i in range(n):
        min_index = i

        for j in range(i + 1, n):
            colors = ["lightblue"] * n
            colors[min_index] = "red"
            colors[j] = "yellow"
            draw_array(colors)
            time.sleep(0.5)

            if nums[j] < nums[min_index]:
                min_index = j

        # Swap
        nums[i], nums[min_index] = nums[min_index], nums[i]

        colors = ["green" if x <= i else "lightblue" for x in range(n)]
        draw_array(colors)
        time.sleep(0.5)

    draw_array(["green"] * n)

start_button = tk.Button(root, text="Start Selection Sort", command=selection_sort_visual)
start_button.pack(pady=10)

draw_array(["lightblue"] * len(nums))
root.mainloop()

# TO run this code type "python3.12 SS animation.py"