def greet(cname,year):
    print("Hello!... my name is {0}".format(cname))
    print("I was created on {0}".format(year))
def remind_name():
    print("Please remind me you name ")
    name=input()
    print("What a nice name {0}".format(name))
def guess_age():
    print("Let me guess your age")
    print("ENter age remainder by dividing with 3 ,5 and 7")
    rem3=int(input())
    rem5=int(input())
    rem7=int(input())
    age=(rem3*70+rem5*21+rem7*15)%105
    print("Your age is {0}".format(age))
def count():
    print("Now I can prove you i acn count any number you want")
    print("Enter number ")
    num=int(input())
    co=0
    while(co<num):
        print(co)
        co+=1
def test():
    print("NOw lets check your knowledge ")
    print("What is AI? ")
    print("1 Artificial intelligence")
    print("2 Arithmatic Intelligence ")
    answer=1
    guess=int(input())
    while(guess != answer):
        print("Please enter again")
        guess=int(input())
    print("Congratulations !......")
def end():
    print("Nice to talk with you ")
    print("Have a nice day!...")







greet('sbot','2022')
remind_name()
guess_age()
count()
test()
end()
