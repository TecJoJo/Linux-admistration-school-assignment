import sys
import string
import random

def pickletter(number):
    for x in range(number):
        index = random.randint(0,len(collection)-1)
        letters.append(collection[index])
    return "".join(letters)

        

collection = string.ascii_lowercase+string.ascii_uppercase+string.digits

letters = []



try:
    intDigits = int(sys.argv[1])
    if intDigits > 0:
        print(pickletter(intDigits))
    else:
       
        print(pickletter(8))
except ValueError:
   
    print(pickletter(8))
except IndexError:
   
    print(pickletter(8))
