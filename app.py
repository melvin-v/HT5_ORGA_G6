import serial, time

PuertoSerie = serial.Serial('COM7', 9600)
time.sleep(2)

while True:
    data = input("Introduce un valor: ")
    if (data == '1'):
        PuertoSerie.write(b'1')
        print("LED Encendido")
    elif (data == '0'):
        PuertoSerie.write(b'0')
        print("LED Apagado")
    else:
        PuertoSerie.close()
        break