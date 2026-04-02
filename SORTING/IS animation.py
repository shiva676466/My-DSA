import tkinter as tk

nums = [6, 5, 8, 4, 1, 0, 2, 9, 3, 7]

WIDTH = 700
HEIGHT = 400

root = tk.Tk()
root.title("Insertion Sort Visualization")

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

def insertion_sort_steps():
    n = len(nums)

    for i in range(1, n):
        key = nums[i]
        j = i - 1

        # Highlight key
        colors = ["lightblue"] * n
        colors[i] = "purple"
        draw(colors)
        yield

        while j >= 0 and nums[j] > key:
            nums[j + 1] = nums[j]

            colors = ["green" if x < i else "lightblue" for x in range(n)]
            colors[j] = "yellow"
            colors[j + 1] = "red"
            draw(colors)
            yield

            j -= 1

        nums[j + 1] = key

        colors = ["green" if x <= i else "lightblue" for x in range(n)]
        draw(colors)
        yield

steps = None

def run():
    global steps
    try:
        next(steps)
        root.after(500, run)
    except StopIteration:
        draw(["green"] * len(nums))

def start():
    global steps
    steps = insertion_sort_steps()
    run()

start_btn = tk.Button(root, text="Start Insertion Sort", command=start)
start_btn.pack(pady=10)

draw(["lightblue"] * len(nums))
root.mainloop()


# To run this type "python3.12 IS\ animation.py"