import serial
import time
import tkinter as tk
from tkinter import messagebox

# Connect to the Arduino via Serial
arduino = serial.Serial(port='COM4', baudrate=9600, timeout=.1)  # Update COM3 to your port

def send_command(command):
    """Send a command to Arduino and display the response."""
    arduino.write(bytes(command, 'utf-8'))
    time.sleep(0.1)
    data = arduino.readline().decode('utf-8').strip()
    print(data)

# Create a simple button interface using Tkinter
root = tk.Tk()
root.title("Arduino LED Controller")

# LED ON Button
led_on_button = tk.Button(root, text="Turn LED ON", command=lambda: send_command('1'))
led_on_button.pack(pady=10)

# LED OFF Button
led_off_button = tk.Button(root, text="Turn LED OFF", command=lambda: send_command('0'))
led_off_button.pack(pady=10)

# Start the Tkinter loop
root.mainloop()
