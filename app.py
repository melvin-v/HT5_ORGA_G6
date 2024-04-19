




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