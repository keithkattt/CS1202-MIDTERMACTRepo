import pyautogui
import keyboard  # To detect key presses
import time

# Wait for Enter key to start the process
print("Press Enter to start...")
keyboard.wait('enter')  # Waits until the 'Enter' key is pressed

# Short delay before the automation starts (you can remove or adjust this if needed)
time.sleep(1)

# Press the Down Arrow 51 times
for _ in range(51):
    pyautogui.press('down')
    time.sleep(0.1)  # Slight delay between each press to mimic human typing

# Press Backspace
pyautogui.press('backspace')

# Press Comma
pyautogui.press(',')
