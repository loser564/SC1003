from ast import Break, Continue, Pass
from asyncore import loop


hexred = 0
hexblue = 0
hexgreen = 0
count = 1

def check_user_input(input):
        try: 
            input = int(input)
            if input not in range(0,256):
                print("Value out of range")
                count += 1
                
            else:
                break

        except ValueError:
            print("Enter an integer input")
            count +=1
            
            
            
        
        


while count <= 3:
    hexred = (input("Enter the value of the red color for message:"))
    check_user_input(hexred)

hexblue = (input("Enter the value of the blue color for message:"))
check_user_input(hexblue)
hexgreen = (input("Enter the value of the green color for message:"))
check_user_input(hexgreen)



