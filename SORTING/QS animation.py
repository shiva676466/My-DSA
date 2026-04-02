import tkinter as tk

nums = [6, 5, 8, 4, 1, 0, 2, 9, 3, 7]

WIDTH = 700
HEIGHT = 400

root = tk.Tk()
root.title("Quick Sort Visualization")

canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT, bg="white")
canvas.pack()

def draw(colors):
    canvas.delete("all")
    bar_width = WIDTH // len(nums)
    max_val = max(nums)

    for i, val in enumerate(nums):
        x0 = i * bar_width
        y0 = HEIGHT - (val / max_val) * HEIGHT
        x1 = (i + 1) * bar_width
        y1 = HEIGHT
        canvas.create_rectangle(x0, y0, x1, y1, fill=colors[i])
        canvas.create_text(x0 + bar_width // 2, y0 - 10, text=str(val))

def quick_sort_steps(low, high):
    if low < high:
        pivot_index = yield from partition(low, high)
        yield from quick_sort_steps(low, pivot_index - 1)
        yield from quick_sort_steps(pivot_index + 1, high)

def partition(low, high):
    pivot = nums[high]
    i = low - 1

    for j in range(low, high):
        colors = ["lightblue"] * len(nums)
        colors[high] = "purple"   # pivot
        colors[j] = "yellow"     # comparing
        draw(colors)
        yield

        if nums[j] < pivot:
            i += 1
            nums[i], nums[j] = nums[j], nums[i]

            colors[i] = "red"
            colors[j] = "red"
            draw(colors)
            yield

    nums[i + 1], nums[high] = nums[high], nums[i + 1]

    colors = ["lightblue"] * len(nums)
    colors[i + 1] = "green"  # pivot placed correctly
    draw(colors)
    yield

    return i + 1

steps = None

def run():
    global steps
    try:
        next(steps)
        root.after(600, run)
    except StopIteration:
        draw(["green"] * len(nums))

def start():
    global steps
    steps = quick_sort_steps(0, len(nums) - 1)
    run()

start_btn = tk.Button(root, text="Start Quick Sort", command=start)
start_btn.pack(pady=10)

draw(["lightblue"] * len(nums))
root.mainloop()


# To run this type "python3.12 QS\ animation.py"