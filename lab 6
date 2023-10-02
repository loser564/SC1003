from sense_hat import SenseHat
from time import sleep

sense = SenseHat()


red = (255,0,0)
blue = (0,0,255)
white = (255,255,255)

while True:
    pitch = sense.get_orientation() ['pitch']
    roll = sense.get_orientation() ['roll']
    print("pitch {0} roll{1}". format(round(pitch,0), round(roll,0)))
    sleep(0.05)

board = [[b,b,b,b,b,b,b,b], 
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b], 
         [b,b,b,b,b,b,b,b] ]

y = 2
x = 2
w = board[y][x] 
board_1D = sum(board,[])
print(board_1D)
sense.set_pixels(board_1D)