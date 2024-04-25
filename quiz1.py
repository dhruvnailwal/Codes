#making quiz through python 
questions=(" Who developed Python Programming Language?",
            "Is Python case sensitive when dealing with identifiers",
           "Which of the following is the correct extension of the Python file",
          " Is Python code compiled or interpreted?",
          )
options=(("A. Wick van Rossum", "B. Rasmus Lerdorf" ,"C. Guido van Rossum" ,"D. Niene Stom"),
        ("A. no" ,"B. yes","C. machine dependend", "D.none of the mentioned"),
        ("A. .pt" ,"B. .py" ,"C. .pn" ,"D. none of the above"),
        ("A. Python code is both compiled and interpreted" ,"B. Python code is neither compiled nor interpreted" ,"C. Python code is only compiled" ,"D. none of the above"))
answers= ("C","B","B","A")
guesses=[]
ques_no=0
score=0
for question in questions:
    print("\n")
    print(question)
    for option in options[ques_no]:
        print(option)
    guess=input("Enter  A,B,C,D:-").upper()
    guesses.append(guess)
    if guess==answers[ques_no]:
            print("Correct")
            score+=1
    else:
        print("Incorrect")
        print("The Correct Answer will be :-",answers[ques_no])
    ques_no+=1
print("Your score is :-",score)   