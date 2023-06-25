import tkinter as tk
import time

def handle_input():
    global inputEmo
    inputEmo = text_variable.get()
    print("Input text:", inputEmo)
    letShake(inputEmo)

def headDefault(moveXR, moveXL, status):
    moveYT = 0
    moveYB = 0

    c.create_oval(130,170,270,320,fill="white", outline="white")
    c.create_oval(150,190,250,230,fill="gray", outline="gray")
    c.create_oval(150,350,250,370,fill="#808080", outline="#808080")
    c.create_oval(150,355,250,365,fill="#444444", outline="#444444")

    c.create_oval(130 + moveXR - moveXL, 60, 270 + moveXR - moveXL, 200, fill="white", outline="white")
    
    c.create_oval(130 + moveXR - moveXL, 60, 270 + moveXR - moveXL, 200, fill="white", outline="white")
    c.create_oval(140 + moveXR - moveXL, 90, 260 + moveXR - moveXL, 190, fill="black")
    c.create_rectangle(110 + moveXR - moveXL, 150, 130 + moveXR - moveXL, 110, fill="gray", outline="gray")
    c.create_rectangle(270 + moveXR - moveXL, 150, 290 + moveXR - moveXL, 110, fill="gray", outline="gray")
    c.create_rectangle(285 + moveXR - moveXL, 150, 290 + moveXR - moveXL, 60, fill="gray", outline="gray")
    
    if status == 'angry':
        c.create_oval(170 + moveXR - moveXL, 110, 180 + moveXR - moveXL, 130, fill="cyan", outline="cyan")
        c.create_oval(220 + moveXR - moveXL, 110, 230 + moveXR - moveXL, 130, fill="cyan", outline="cyan")
        
        c.create_line(160+ moveXR - moveXL, 90, 190+ moveXR - moveXL, 110, fill="red", width=2)
        c.create_line(215+ moveXR - moveXL, 110, 245+ moveXR - moveXL, 90, fill="red", width=2)
        c.create_arc(170+ moveXR - moveXL, 1000, 230+ moveXR - moveXL, 160, start=70, extent=38, outline="white", width=3, style="arc")
    elif status == 'happy':
        c.create_oval(170 + moveXR - moveXL, 110, 180 + moveXR - moveXL, 130, fill="cyan", outline="cyan")
        c.create_oval(220 + moveXR - moveXL, 110, 230 + moveXR - moveXL, 130, fill="cyan", outline="cyan")
        c.create_arc(170+ moveXR - moveXL, 110, 230+ moveXR - moveXL, 170, start=200, extent=140, outline="white", width=3, style="arc")
    else:
        c.create_oval(170 + moveXR - moveXL, 110, 180 + moveXR - moveXL, 130, fill="cyan", outline="cyan")
        c.create_oval(220 + moveXR - moveXL, 110, 230 + moveXR - moveXL, 130, fill="cyan", outline="cyan")
        c.create_line(180+ moveXR - moveXL, 160, 220+ moveXR - moveXL, 160, fill="cyan", width=2)

def letShake(inputEmo):
    moveXR = 0
    moveXL = 0
    status = str(inputEmo)

    for _ in range(100):
        c.delete("all")
        moveXR += 10
        headDefault(moveXR, moveXL, status)
        c.update()
        time.sleep(0.1)

        c.delete("all")
        moveXR -= 10
        headDefault(moveXR, moveXL, status)
        c.update()
        time.sleep(0.1)

    c.delete("all")
    headDefault(moveXR, moveXL, status)

root = tk.Tk()
root.title("Emo Animation")

c = tk.Canvas(root, width=400, height=400)
c.pack()
c.configure(bg="#e5e5e5", highlightthickness=0)

text_variable = tk.StringVar()

label = tk.Label(root, text="Enter text:")
label.pack()

entry = tk.Entry(root, textvariable=text_variable)
entry.pack()

button = tk.Button(root, text="Submit", command=handle_input)
button.pack()

root.mainloop()
