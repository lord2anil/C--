import subprocess
import time
import sys
import argparse

# Set up argument parsing
parser = argparse.ArgumentParser(description='Types a string character by character from a text file. Useful for inputting long strings of text into programs or consoles that don\'t allow copy and paste. Will wait 3 seconds before typing to allow you to alt-tab into the correct window.')
parser.add_argument('filename', type=str, help='Path to the text file containing the text you wish the auto-typer to input.')

# args = parser.parse_args()

# 3 seconds to alt-tab to correct window after running
time.sleep(3)

# Open the file and read its contents
with open("autoTyping/input.txt", 'r') as file:
    text = file.read()

# Type out the text character by character
for ch in text:
    subprocess.call(["xdotool", "type", ch])
    # Increase or decrease the time below to type slower or faster
    # time.sleep(0.001)