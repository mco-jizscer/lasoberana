/*

LA SOBERANA

AMPLIADORA 120MM
Key + Red + Status
10 Programas

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

void setup()
  {
    pinMode(buttonPin, INPUT);
    pinMode(timerPot, INPUT);
    pinMode(keyLed, OUTPUT);
    pinMode(redLed, OUTPUT);
    pinMode(statusLed, OUTPUT);
    Serial.begin(9600);
  }

void loop()
{
  buttonState = digitalRead(buttonPin);
  timerVal = analogRead(timerPot);
  timer = map(timerVal, 0, 1023, 255, 0);

//////*PROGRAMA 1*//////
//2 Segundos
  if (buttonState == HIGH && timer >=5 && timer <35)
    {
        {
          Serial.print("Programa 1: 2 Segundos");
          Serial.println();
        }
        delay(800);
          digitalWrite(keyLed, HIGH);
          digitalWrite(redLed, LOW);
          digitalWrite(statusLed, HIGH);
        delay(2000);
        goto aviso;
    }

//////*PROGRAMA 2*//////
//3 Segundos
  if (buttonState == HIGH && timer >35 && timer <70)
    {
        {
          Serial.print("Programa 2: 3 Segundos");
          Serial.println();
        }
        delay(800);
          digitalWrite(keyLed, HIGH);
          digitalWrite(redLed, LOW);
          digitalWrite(statusLed, HIGH);
        delay(3000);
        goto aviso;
    }

//////*PROGRAMA 3*//////
//5 Segundos
  if (buttonState == HIGH && timer >70 && timer <100)
    {
        {
          Serial.print("Programa 3: 5 Segundos");
          Serial.println();
        }
        delay(800);
          digitalWrite(keyLed, HIGH);
          digitalWrite(redLed, LOW);
          digitalWrite(statusLed, HIGH);
        delay(5000);
        goto aviso;
    }

//////*PROGRAMA 4*//////
//8 Segundos
  if (buttonState == HIGH && timer >100 && timer <135)
    {
        {
          Serial.print("Programa 4: 8 Segundos");
          Serial.println();
        }
        delay(800);
          digitalWrite(keyLed, HIGH);
          digitalWrite(redLed, LOW);
          digitalWrite(statusLed, HIGH);
        delay(8000);
        goto aviso;
    }

//////*PROGRAMA 5*//////
//12 Segundos
if (buttonState == HIGH && timer >135 && timer <170)
   {
        {
          Serial.print("Programa 5: 12 Segundos");
          Serial.println();
        }
        delay(800);
          digitalWrite(keyLed, HIGH);
          digitalWrite(redLed, LOW);
          digitalWrite(statusLed, HIGH);
        delay(12000);
        goto aviso;
    }

//////*PROGRAMA 6*//////
//16 Segundos
  if (buttonState == HIGH && timer >170 && timer <202)
    {
      {
        Serial.print("Programa 6: 16 Segundos");
        Serial.println();
      }
      delay(800);
        digitalWrite(keyLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(statusLed, HIGH);
      delay(16000);
      goto aviso;
    }

//////*PROGRAMA 7*//////
//32 Segundos
  if (buttonState == HIGH && timer >202 && timer <235)
    {
      {
        Serial.print("Programa 7: 32 Segundos");
        Serial.println();
      }
      delay(800);
        digitalWrite(keyLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(statusLed, HIGH);
      delay(32000);
      goto aviso;
    }

//////*PROGRAMA 8*//////
//48 Segundos
  if (buttonState == HIGH && timer >235 && timer <255)
    {
      {
        Serial.print("Programa 8: 48 Segundos");
        Serial.println();
      }
      delay(800);
        digitalWrite(keyLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(statusLed, HIGH);
      delay(48000);
      goto aviso;
    }

//////*PROGRAMA 9*//////
//60 Segundos
  if (buttonState == HIGH && timer == 255)
    {
      {
        Serial.print("Programa 9: 60 Segundos");
        Serial.println();
      }
      delay(800);
        digitalWrite(keyLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(statusLed, HIGH);
      delay(60000);
      goto aviso;
    }

//////*PROGRAMA X*//////
//Pruebas: 60, 48, 32, 16, 12, 8, 5, 3, 2. (segundos)
  if (buttonState == HIGH && timer <=5)
    {
      {
        Serial.print("Programa X: Pruebas ");
        Serial.println();
      }

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

//////*AVISO*//////
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
    analogWrite(statusLed, 1);
     }
}
