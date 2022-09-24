import random
while(True):
    a=random.randint(10,100)
    b=random.randint(10,100)
    if(a>38 and b>75):
        print("High Temperature and Humidity of:",a,b,"%","Alarm is ON")
    elif(a<38 and b<75):
        print("Nomal Temperature and Humidity of:",a,b,"%","Alarm is OFF")
        break