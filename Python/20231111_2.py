import random

def guess(user):
    num = 0
    max = 100
    min = 1

    while 1:
        com = random.randint(min, max)
        if user ==com:
            print("电脑猜的数字是", com, "电脑猜对了，你输入的数字是:", user,)
            print("电脑一共猜了",num ,"次")
            break
        elif user >com:
            print("电脑猜的数字是", com, "，太小了")
            num +=1
            min = com + 1
        else:
            print("电脑猜的数字是", com, "，太大了")
            num += 1
            max =com - 1

print("请输入一个1-100的数字")
while 1:
    user = int(input())
    if user > 100:
        print("请重新输入一个1-100的数字!")
    elif user == 0:
        print("请重新输入一个1-100的数字!")
    else:
        guess(user)
        break