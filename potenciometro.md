#Potenciómetro (Calibración)

>const int timerPot = A0;

>int timerVal = 0;

>timerVal = analogRead(timerPot);

>timer = map(timerVal, 0, 1023, 255, 0);

x (<5)

1 (>5 && <35)

2 (>35 && <70)

3 (>70 && <100)

4 (>100 && <135)

5 (>135 && <170)

6 (>170 && <202)

7 (>202 && <235)

8 (>235 && <255)

9 == 255
