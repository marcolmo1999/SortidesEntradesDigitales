const int ledPin[]= {7, 8, 9, 10};
const int buttonPin = 2;
boolean buttonEstat = LOW; 
int ledNum= 4;
int num= 0;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
{
  for(int i = 0; i < ledNum; i++) 
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);      // definir el pin 2 com una entrada
  for(int j = 0; j < ledNum ; j++)     // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
      }
}
}

void loop(){
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == HIGH)
  { 
    num = num + 1;                 // incrementar el número a mostrar
    if (num == 64) num = 0;       // quan ja ha ensenyat el 15 tornar al 0  
    for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
}
