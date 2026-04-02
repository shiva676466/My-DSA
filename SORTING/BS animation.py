import tkinter as tk
import random
import time

# Bubble Sort Visualization Class
class BubbleSortGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("Bubble Sort Animation")

        self.canvas = tk.Canvas(root, width=600, height=400, bg="white")
        self.canvas.pack()

        self.array = [random.randint(10, 390) for _ in range(30)]
        self.draw_array()

        tk.Button(root, text="Start Bubble Sort", command=self.bubble_sort).pack()

    def draw_array(self, color_array=None):
        self.canvas.delete("all")
        bar_width = 600 / len(self.array)

        for i, value in enumerate(self.array):
            x0 = i * bar_width
            y0 = 400 - value
            x1 = (i + 1) * bar_width
            y1 = 400

            color = color_array[i] if color_array else "skyblue"
            self.canvas.create_rectangle(x0, y0, x1, y1, fill=color)

        self.root.update_idletasks()

    def bubble_sort(self):
        n = len(self.array)
        for i in range(n):
            for j in range(0, n - i - 1):
                colors = ["skyblue"] * n
                colors[j] = colors[j + 1] = "red"
                self.draw_array(colors)
                time.sleep(0.1)

                if self.array[j] > self.array[j + 1]:
                    self.array[j], self.array[j + 1] = self.array[j + 1], self.array[j]
                    self.draw_array(colors)
                    time.sleep(0.1)

        self.draw_array(["green"] * n)

# Run the program
root = tk.Tk()
BubbleSortGUI(root)
root.mainloop()

# To run the program type :   "python3.12 animation.py"