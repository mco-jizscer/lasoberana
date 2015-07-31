/*

LA SOBERANA

AMPLIADORA 120MM
key + Red
9 TIEMPOS + PRUEBAS

created 2014
by MCO Jizscer
www.emeceo.com

JIZSCER, MCO, "La Soberana", de la serie, instrumentos de control, 2014-2015.
Copyleft: Esta obra es libre, puede redistribuirla o modificarla de acuerdo
con los términos de la Licencia Arte Libre.
Encontrará un ejemplar de esta licencia en el sitio Copyleft Attitude
( http://www.artlibre.org/) y otros sitios.

*/

const int buttonPin = 4;

const int timerPot = A0;

const int redLed = 10;
const int keyLed = 9;
const int statusLed = 13;

int buttonState = 0;

int timerVal = 0;
int timer = 0;


//
void setup() {

  pinMode(buttonPin, INPUT);

  pinMode(timerPot, INPUT);

  pinMode(keyLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(statusLed, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  timerVal = analogRead(timerPot);
  timer = map(timerVal, 0, 1023, 10, 1);


//Serial Print
    if (buttonState == HIGH)
      {
       Serial.print("Timer: ");
       Serial.println(timer);

      }



// 2 Segundos
if (buttonState == HIGH && timer == 1)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(2000);

     goto aviso;

   }

// 3 Segundos
if (buttonState == HIGH && timer == 2)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(3000);

     goto aviso;

   }

// 5 Segundos
if (buttonState == HIGH && timer == 3)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(5000);

     goto aviso;

   }

// 8 Segundos
if (buttonState == HIGH && timer == 4)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(8000);

     goto aviso;

   }

// 12 Segundos
if (buttonState == HIGH && timer == 5)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(12000);

     goto aviso;

   }

// 16 Segundos
if (buttonState == HIGH && timer == 6)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(16000);

     goto aviso;

   }

// 32 Segundos
if (buttonState == HIGH && timer == 7)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(32000);

     goto aviso;

   }

// 48 Segundos
if (buttonState == HIGH && timer == 8)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(48000);

     goto aviso;

   }

//  60 Segundos
if (buttonState == HIGH && timer == 9)
   {
     delay(800);

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, HIGH);
     delay(60000);

     goto aviso;

   }


// Pruebas: 60, 48, 32, 16, 12, 8, 5, 3, 2, + 0. (segundos)
if (buttonState == HIGH && timer == 10)
   {
     delay(800);

     //1... 2 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(2000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);

     //2... +1 = 3 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(1000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);

     //3... +2 = 5 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(2000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);

     //4... +3 = 8 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(3000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);

     //5... +4 = 12 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(4000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);

     //6... +4 = 16 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(4000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);

     //7... +16 = 32 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(16000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);

     //8... +16 = 48 segundos
     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(16000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(1500);



     //9... +12 = 60 segundos

     digitalWrite(keyLed, HIGH);
     digitalWrite(redLed, LOW);
     digitalWrite(statusLed, LOW);
     delay(12000);

     digitalWrite(keyLed, LOW);
     digitalWrite(redLed, HIGH);
     digitalWrite(statusLed, HIGH);
     delay(800);

aviso:
digitalWrite(keyLed, LOW);
digitalWrite(redLed, LOW);
delay(150);
digitalWrite(statusLed, HIGH);
delay(150);
digitalWrite(statusLed, LOW);
delay(150);
digitalWrite(statusLed, HIGH);
delay(150);
digitalWrite(statusLed, LOW);
delay(150);
digitalWrite(statusLed, HIGH);
delay(150);
digitalWrite(statusLed, LOW);
delay(150);
digitalWrite(statusLed, HIGH);
delay(150);
digitalWrite(statusLed, LOW);
delay(150);
 }

else {
    // turn LED off:
    digitalWrite(keyLed, LOW);
    digitalWrite(redLed, HIGH);
    digitalWrite(statusLed, HIGH);
     }

}
