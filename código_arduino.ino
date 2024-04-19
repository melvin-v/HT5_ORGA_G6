// Este código Arduino está diseñado para controlar un LED conectado al pin 8 utilizando entrada serial.
// Configura la comunicación serial a una velocidad de baudios de 9600 y configura el pin 8 como salida para el LED.

const int ledPin = 8; // Define el número de pin para el LED

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial a 9600 baudios
  pinMode(ledPin, OUTPUT); // Configura el pin del LED como salida
}

void loop() {
  if (Serial.available() > 0) { // Verifica si hay datos disponibles para leer desde serial
    char data = Serial.read(); // Lee el carácter entrante desde serial
    
    // Si el carácter recibido es '1', enciende el LED
    if (data == '1') {
      digitalWrite(ledPin, HIGH);
    }
    // Si el carácter recibido es '0', apaga el LED
    else if (data == '0') {
      digitalWrite(ledPin, LOW);
    }
  }
}
