

String mssg; // variable con cadena de valores recibidos
int intmssg = 0; //  Nuestro valor final en un variable tipo Int

int s1 = 5;  //  Variable para salida digital en el pin 5
int s2 = 9;  //  Variable para salida digital en el pin 9


void setup() {
 
  delay(100);
  Serial.begin(115200);

  pinMode(s1, OUTPUT); // indicamos que los puertos se usaran como salidas
  pinMode(s2, OUTPUT);
 
  contacto();


}


void contacto() {
  
  while (Serial.available() <= 0) { // bucle mientras no reciba informacion
    digitalWrite(s1, LOW);   // Establecemos salidas digitales como LOW mientras no reciba informacion 
    digitalWrite(s2, LOW);    
    Serial.println("Conectando...");

    delay(5);
  }

}

void loop() {

  if (Serial.available()) {

    
    mssg = Serial.readStringUntil('\n');
    //Serial.println(mssg);
    intmssg = mssg.toInt(); // convertir variable String a tipo Int
    
  
  }

  if (intmssg % 2  == 0) //PRENDER SOLO CON NUMEROS PARES ( USANDO EL RESIDUO DE LA DIVISION )
 //if (intmssg > 10 ) // mayor a 10 
 //if (intmssg == 10 ) // igual a 10
  {
    // Serial.print("Nada");
    digitalWrite(s1, HIGH);   
    digitalWrite(s2, LOW);  
   
 

  }
  
  else 
  {
    // Serial.print("Nada");
    digitalWrite(s1, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(s2, HIGH);   // turn the LED on (HIGH is the voltage level)
   
 

  }

  


  delay(1);




}
