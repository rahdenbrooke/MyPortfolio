# Author: Brooke Rahden
# Course: CMP SCI 2250
# Date: 02-12-2026
# Project 2 - Tkinter
import tkinter as tk


class CreateStoplight:
    def __init__(self):

        # create window
        self.window = tk.Tk()
        self.window.title("Stoplight")
        self.window.geometry("400x600")
        self.window.configure(background="white")

        # canvas
        self.canvas = tk.Canvas(self.window, width=400, height=450, background="white", borderwidth=0, highlightthickness=0)
        self.canvas.pack()

        # create rectangle
        # create_rectangle(x0, y0, x1, y2)
        self.canvas.create_rectangle(135, 20, 265, 400, outline="black", width=2)

        # create circles
        # create_oval(x0, y0, x1, y2)
        self.redLight = self.canvas.create_oval(140, 25, 260, 145, outline="black", width=2, fill="white")
        self.yellowLight = self.canvas.create_oval(140, 150, 260, 270, outline="black", width=2, fill="white")
        self.greenLight = self.canvas.create_oval(140, 275, 260, 395, outline="black", width=2, fill="white")

        # hold radio variable (starting StingVal) IMPORTANT
        self.color_var = tk.StringVar(value="")

        # frame for buttons
        self.frame = tk.Frame(self.window, background="white")
        self.frame.pack()

        # radio buttons
        self.redButton = tk.Radiobutton(self.frame, text="Red ", font="Arial 30", variable=self.color_var,
                                        bg="white", fg="black", value="red", command=self.whiteLights)
        self.yellowButton = tk.Radiobutton(self.frame, text="Yellow ", font="Arial 30", variable=self.color_var,
                                           bg="white", fg="black", value="yellow", command=self.whiteLights)
        self.greenButton = tk.Radiobutton(self.frame, text="Green ", font="Arial 30", variable=self.color_var,
                                          bg="white", fg="black", value="green", command=self.whiteLights)

        # pack buttons
        self.redButton.pack(side="left", expand=True)
        self.yellowButton.pack(side="left", expand=True)
        self.greenButton.pack(side="left", expand=True)

        # initialize stoplight color
        self.whiteLights()

        # run
        self.window.mainloop()

    # defaults to white color when clicked
    def whiteLights(self):
        self.canvas.itemconfig(self.redLight, fill="white")
        self.canvas.itemconfig(self.yellowLight, fill="white")
        self.canvas.itemconfig(self.greenLight, fill="white")

        selected_color = self.color_var.get() # gets whatever radio button is selected
        if selected_color == "red":
            self.canvas.itemconfig(self.redLight, fill="red")
        elif selected_color == "yellow":
            self.canvas.itemconfig(self.yellowLight, fill="yellow")
        elif selected_color == "green":
            self.canvas.itemconfig(self.greenLight, fill="green")

        # run
        self.window.mainloop()

# call class
CreateStoplight()
