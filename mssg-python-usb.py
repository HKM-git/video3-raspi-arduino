
#escribe aqui tu codigo python que mandara mensajes a arduino 

import serial
import time

while(1): # ciclo infinito
 for x in range (1,200): # hacemos que la variable x incremente en 1 hasta llegar a 20

         ser = serial.Serial('/dev/ttyUSB0', 115200) # iniciamos comunicacion indicando el puerto y la velocidad de transmision
         ser.flush() # limpiamos el puerto
         print (x)  # imprimimos x para saber que le mandara al puerto serial
         number = str(x) # convertimos la variable int x a una variable tipo String
         stro = number+"\n" # concatenamos nuestra variable String con un valor que indica el fin de la cadena 
         ser.write(stro.encode()) # mandamos la cadena de caracteres que antes fue ....
         time.sleep(0.5) # damos un tiempo para que el puerto mande la informacion
