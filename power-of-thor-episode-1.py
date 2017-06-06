import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
# ---
# Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

# light_x: the X position of the light of power
# light_y: the Y position of the light of power
# initial_tx: Thor's starting X position
# initial_ty: Thor's starting Y position

light_x, light_y, initial_tx, initial_ty = [int(i) for i in input().split()]

cal_y = initial_ty - light_y
cal_x = initial_tx - light_x
# game loop
while True:
    remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.
    if ((cal_x != 0) and (cal_y != 0)):
        if (cal_x > 0):
            while (cal_x != 0):
                print ("W")
                cal_x -= 1
            else:
                while (cal_y != 0):
                    print ("SE")
                    cal_y += 1
    elif ((cal_x == 0) and (cal_y != 0)):
        if (cal_y > 0):
            print ("N")
        else:
            print ("S")
            cal_y -= 1
    elif ((cal_x != 0) and (cal_y == 0)):
        if (cal_x > 0):
            print ("W")
        else:
            print ("E")

# Write an action using print
# To debug: print("Debug messages...", file=sys.stderr)
# A single line providing the move to be made: N NE E SE S SW W or NW
                                                                                                                                                                            #    print("E")
