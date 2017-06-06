import sys
import math

# The while loop represents the game.
# Each iteration represents a turn of the game
# where you are given inputs (the heights of the mountains)
# and where you have to print an output (the index of the mountain to fire on)
# The inputs you are given are automatically updated according to your last actions.

dic = {}

# game loop
while True:
    for i in range(8):
        mountain_h = int(input()) # represents the height of one mountain.
        dic[i] = mountain_h
        dic2 = dic.items()
        montri = sorted(dic2, key=lambda x: x[1], reverse = True)
    print (montri[0][0])

##################################################################### DEBUG
    print("Debug messages...", file=sys.stderr)
    print (dic, file = sys.stderr)
    print (montri, file = sys.stderr)

# Write an action using print
# To debug: print("Debug messages...", file=sys.stderr)
# The index of the mountain to fire on.



