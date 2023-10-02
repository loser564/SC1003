import random



attempt = 0
def checker(string1,string2):
    A = 0
    B = 0
    for i in range(0,3):
        if string1[i] == string2[i]:
            A = A + 1
        else:
            B = B + 1
    print(str(A) + "A (Bulls)")
    print(str(B) + "B (Cows)")

target = str(random.randint(1000,9999)) 
print(target) 
while True: 
    user_guess = str(input("Please input 4 digits: "))
    if target == user_guess:
        print("You win!!")
        print("Attempts" + str(attempt))
        break
    else: 
        checker(target,user_guess)
        attempt = attempt + 1
        
        

            

