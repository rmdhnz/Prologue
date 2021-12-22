#This source code is written by FADHLY RAMADHAN
#DEPARTEMEN TEKNIK ELEKTRO
#INSTITUT TEKNOLOGI SEPULUH NOPEMBER
import random
from os import system
print("WELCOME TO GUESSING GAME\nARE YOU READY TO BEGIN ? (Y/T)")
opt = input()
if opt == 'Y' or opt == 'y' :  system("cls")
else : exit()
guess = ""
answer = random.randint(1,10)
times,limit = 0,3
out_of_guess = False
while guess != answer and not out_of_guess : 
    if times < limit : 
        guess = int(input('Input your guess : '))
        times+=1
        if guess != answer and not out_of_guess :
            if guess > answer : print("Your guess is too high, try again!")
            else : print("Your guess is too low, try again")
    else : 
        out_of_guess = True

if out_of_guess : 
    print(f'You loose! The answer is {answer}')
else : 
    print("You win")
