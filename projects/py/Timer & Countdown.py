import time
import sys


count = 0
min = 0
hour = 0
adjustment = int
answ = str


print("-"*50)

answ = input("Do you want a countdown for the timer ?(Y/N): ").lower()

if answ.lower() == "y" :
    adjustment = int(input("How many seconds do you want it to count down ?: "))
    print("-"*50)
elif answ.lower() == "n" :
    print("-"*50)
    pass


s_hour = abs(int(input("How many hours do you want for timer (e.g 0,1..) ?: ")))
s_min = abs(int(input("How many minutes do you want for timer (e.g 0,1..) ?: ")))
s_count = abs(int(input("How many seconds do you want for timer (e.g 0,1..) ?: ")))
s_finish = 0

timer_duration = (s_hour*3600)+(s_min*60)+s_count

print("-"*50)

if answ.lower() == "y":
    print ("\n The timer starts in* \n")
    while adjustment > 0:
        print(f"{adjustment} Seconds.")
        time.sleep(1)
        adjustment -= 1
    
    print("\n","-"*50)

print("-"*50)

while s_finish < timer_duration:
    
    count += 1
    if count == 60:
        count = 0
        min += 1
        if min == 60:
            hour += 1
            min = 0
        
        
    time.sleep(1)
    print("Hours :",hour, " | " , "Minute :",min," | " ,"Seconds :", count)
    s_finish += 1