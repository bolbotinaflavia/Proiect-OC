#include <Wire.h>
/*define delay uri mari
functie cu for pt delay
*/

//definire întărzieri

#define DELAY1 1000
#define DELAY2 2000
#define DELAY3 5000
#define DELAY4 15000
#define DELAY5 20000

//definire variabile globale
const int B23_r_P = 12; // tipul numele = pinul
const int B23_g_P = 11;
const int B45_r_P = 10;
//....
const int B45_g_P = 9;
const int B67_r_P = 8;
const int B67_g_P = 7;
const int B89_r_P = 6;
const int B89_g_P = 14;
const int B1_r_M = 5;
const int B1_g_M = 4;
const int B2_r_M = 3;
const int B2_g_M = 2;
const int B34_r_M = 15;
const int B34_g_M = 16;

char input, input1;

void setup() { //setează pinii, inițializează variabile, începe să utilizeze biblioteci

    pinMode(B23_r_P, OUTPUT);
    pinMode(B23_g_P, OUTPUT);
    pinMode(B45_r_P, OUTPUT);
    pinMode(B45_g_P, OUTPUT);
    pinMode(B67_g_P, OUTPUT);
    pinMode(B67_r_P, OUTPUT);
    pinMode(B89_g_P, OUTPUT);
    pinMode(B89_r_P, OUTPUT);
    pinMode(B1_r_M, OUTPUT);
    pinMode(B1_g_M, OUTPUT);
    pinMode(B2_r_M, OUTPUT);
    pinMode(B2_g_M, OUTPUT);
    pinMode(B34_r_M, OUTPUT);
    pinMode(B34_g_M, OUTPUT);
    //...
    Wire.begin(); //începe o legătură
    Serial.begin(9600);//începe transmiterea serială
}

int ok;
char anterior = 'S';

//seteaza culoarea becului RGB primit ca referinta
void setColor(const int P1, const int P2, int R, int G) {
    analogWrite(P1, R);
    analogWrite(P2, G);
}

//
void culori(char c, char s) {
    int r = 0, g = 0;
    switch (c) {
    case 'V': r = 0; g = 255; break;
    case 'R': r = 255; g = 0; break;
    case 'G': r = 255; g = 255; break;
    case 'S': r = 0; g = 0; break;
    }
    if (s == 'T') {
        setColor(B23_r_P, B23_g_P, r, g);
        setColor(B45_r_P, B45_g_P, r, g);
        setColor(B67_r_P, B67_g_P, r, g);
        setColor(B89_r_P, B89_g_P, r, g);
        setColor(B1_r_M, B1_g_M, r, g);
        setColor(B2_r_M, B2_g_M, r, g);
        setColor(B34_r_M, B34_g_M, r, g);
    }
    if (s == 'M') {
        setColor(B1_r_M, B1_g_M, r, g);
        setColor(B2_r_M, B2_g_M, r, g);
        setColor(B34_r_M, B34_g_M, r, g);
    }
    if (s == 'P') {
        setColor(B23_r_P, B23_g_P, r, g);
        setColor(B45_r_P, B45_g_P, r, g);
        setColor(B67_r_P, B67_g_P, r, g);
        setColor(B89_r_P, B89_g_P, r, g);
    }
}


void normal()
{
    setColor(B23_r_P, B23_g_P, 0, 255);
    setColor(B45_r_P, B45_g_P, 255, 0);
    setColor(B67_r_P, B67_g_P, 0, 255);
    setColor(B89_r_P, B89_g_P, 255, 0);
    setColor(B1_r_M, B1_g_M, 0, 255);
    setColor(B2_r_M, B2_g_M, 255, 0);
    setColor(B34_r_M, B34_g_M, 0, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY4);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B23_r_P, B23_g_P, 0, 0);
    setColor(B67_r_P, B67_g_P, 0, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B23_r_P, B23_g_P, 0, 255);
    setColor(B67_r_P, B67_g_P, 0, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B23_r_P, B23_g_P, 0, 0);
    setColor(B67_r_P, B67_g_P, 0, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B23_r_P, B23_g_P, 0, 255);
    setColor(B67_r_P, B67_g_P, 0, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B23_r_P, B23_g_P, 0, 0);
    setColor(B67_r_P, B67_g_P, 0, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B23_r_P, B23_g_P, 255, 0);
    setColor(B67_r_P, B67_g_P, 255, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY5);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B1_r_M, B1_g_M, 255, 255);
    setColor(B34_r_M, B34_g_M, 255, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY3);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B1_r_M, B1_g_M, 255, 0);
    setColor(B34_r_M, B34_g_M, 255, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY3);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B45_r_P, B45_g_P, 0, 255);
    setColor(B89_r_P, B89_g_P, 0, 255);
    setColor(B2_r_M, B2_g_M, 0, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY4);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B45_r_P, B45_g_P, 0, 0);
    setColor(B89_r_P, B89_g_P, 0, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B45_r_P, B45_g_P, 0, 255);
    setColor(B89_r_P, B89_g_P, 0, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B45_r_P, B45_g_P, 0, 0);
    setColor(B89_r_P, B89_g_P, 0, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B45_r_P, B45_g_P, 0, 255);
    setColor(B89_r_P, B89_g_P, 0, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B45_r_P, B45_g_P, 0, 0);
    setColor(B89_r_P, B89_g_P, 0, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY1);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B45_r_P, B45_g_P, 255, 0);
    setColor(B89_r_P, B89_g_P, 255, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY5);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B2_r_M, B2_g_M, 255, 255);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY3);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    setColor(B2_r_M, B2_g_M, 255, 0);
    if (Serial.available()) {
        input = Serial.read();
        return;
    }
    delay(DELAY3);
}

void funct_x() {
    culori('S', 'T');
    delay(DELAY2);
    culori('R', 'T');
    delay(DELAY2);
    culori('S', 'P');
    culori('G', 'M');
    delay(DELAY2);
    culori('V', 'T');
    delay(DELAY2);
}

void loop() {
    Wire.beginTransmission(1);
    if (Serial.available()) {
        Wire.beginTransmission(1);
        input = Serial.read();
        Serial.print("You typed:");
        Serial.println(input);
        //Serial.print(input);
        Wire.write(input);
        Wire.endTransmission();
    }


    if (input == 'N') {
        normal();
    }
    if (input == 'B') {
        culori('G', 'T');
        //analogWrite(B1_P, 255);
        delay(DELAY1);
        //analogWrite(B1_P, 0);
        culori('S', 'T');
        delay(DELAY1);

    }
    if (input == 'D') {
        ok = 1;
        //analogWrite(B1_P, 0);
        culori('S', 'T');
        do {
            if (Serial.available()) {
                Wire.beginTransmission(1);
                input1 = Serial.read();
                Serial.print("You typed 1:");
                Serial.println(input1);
                Wire.write(input1);
                Wire.endTransmission();
                if (input1 != 'T') {
                    anterior = input1;
                }
            }
            if (input1 == 'T') {
                if (anterior == 'S') {
                    culori('G', 'T');
                }
                else {
                    culori(anterior, 'T');
                }
                delay(DELAY1);
                culori('S', 'T');
                delay(DELAY1);
            }
            culori(input1, 'T');
            if (input1 == 'X') {
                funct_x();
            }

            if (input1 == 'B') {
                ok = 0;
                input = 'B';
                input1 = 'S';
            }
            if (input1 == 'N') {
                ok = 0;
                input = 'N';
                input1 = 'S';
            }
        } while (ok != 0);
    }



}