#rock paper scissor
import random
player1=None
options=("rock","paper","scissor")
while player1 not in options:
    player1=input("Enter Your choice ")
computer=random.choice(options)
print(f"the players choice is :{player1}")
print(f"the computer choice is :{computer}")
if player1==computer:
    print("Tie")
if  player1=="rock" and computer=="scissors":
    print("player1 won")
elif  player1=="paper" and computer=="rock":
    print("player1 won")
elif player1=="scissor" and computer=="paper":
    print("player1 won")
else:
    print("Computer won")