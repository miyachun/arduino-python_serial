import serial

ser = serial.Serial('COM9', baudrate = 9600, timeout = 1)

def getValues():
    
    ser.write(b'g')
    arduinoData = ser.readline().decode('ascii')
    return arduinoData
try:
    while True:
        print(getValues())
        
except KeyboardInterrupt:
    ser.close()
    print('close！')



