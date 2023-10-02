import random
from random import randint

a1 = randint(0,7)
a2 = randint(0,7)
a3 = randint(0,7)
a4 = randint(0,7)
b1 = randint(0,7)
b2 = randint(0,7)
b3 = randint(0,7)
b4 = randint(0,7)

if a1 is a2 and b1 is b2 :
    a1 = randint(0,7)
    b1 = randint(0,7)
if a1 is a3 and b1 is b3:
    a1 = randint(0,7)
    b1 = randint(0,7)
if a1 is a4 and b1 is b4:
    a1 = randint(0,7)
    b1 = randint(0,7)
if a2 is a3 and b2 is b3:
    a2 = randint(0,7)
    b2 = randint(0,7)
if a2 is a4 and b2 is b4:
    a2 = randint(0,7)
    b2 = randint(0,7)
if a4 is a3 and b4 is b3:
    a4 = randint(0,7)
    b4 = randint(0,7)

    
print (a1,b1)
print (a2,b2)
print(a3,b3)
print(a4,b4)
 
