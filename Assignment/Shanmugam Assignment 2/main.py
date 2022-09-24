import random
while(True):
    var_temp = random.randint(10,100)
    var_humidity = random.randint(10,100)
    if var_temp>35:
        print("High Temperature:",var_temp,"Alarm is ON")
        #break
    elif var_temp<35 and var_humidity<70:
        print("Normal Condition, Temp -->",var_temp,"Humidity-->",var_humidity,"Alarm is OFF")
        