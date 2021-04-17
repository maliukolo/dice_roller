#include <TrueRandom.h>

#define ROW_1 12
#define ROW_2 11
#define ROW_3 10
#define ROW_4 9
#define ROW_5 8
#define ROW_6 7
#define ROW_7 6
#define ROW_8 5
#define COL_1 A0
#define COL_2 A1
#define COL_3 A2
#define COL_4 A3
#define COL_5 A4
#define COL_6 A5
#define COL_7 2
#define COL_8 3

const byte rows[] = {
    ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};

byte d_1_1[] =   {B00000000,
                  B01000000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000010,
                  B00000000};

byte d_1_2[] =   {B00000000,
                  B01000000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000000,
                  B00000001};

byte d_1_3[] =   {B00000000,
                  B01000000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000010,
                  B00000001};

byte d_1_4[] =   {B00000000,
                  B01000000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000000,
                  B00000101};

byte d_1_5[] =   {B00000000,
                  B01000000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000010,
                  B00000101};

byte d_1_6[] =   {B00000000,
                  B01000000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000101,
                  B00000101};              

byte d_2_1[] =   {B10000000,
                  B00000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000010,
                  B00000000};

byte d_2_2[] =   {B10000000,
                  B00000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000000,
                  B00000001};
              
byte d_2_3[] =   {B10000000,
                  B00000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000010,
                  B00000001};

byte d_2_4[] =   {B10000000,
                  B00000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000000,
                  B00000101};

byte d_2_5[] =   {B10000000,
                  B00000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000010,
                  B00000101};

byte d_2_6[] =   {B10000000,
                  B00000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000101,
                  B00000101};
                  
byte d_3_1[] =   {B10000000,
                  B01000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000010,
                  B00000000};

byte d_3_2[] =   {B10000000,
                  B01000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000000,
                  B00000001};

byte d_3_3[] =   {B10000000,
                  B01000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000010,
                  B00000001};

byte d_3_4[] =   {B10000000,
                  B01000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000000,
                  B00000101};

byte d_3_5[] =   {B10000000,
                  B01000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000010,
                  B00000101};                  

byte d_3_6[] =   {B10000000,
                  B01000000,
                  B00100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000101,
                  B00000101};

byte d_4_1[] =   {B10100000,
                  B00000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000010,
                  B00000000};

byte d_4_2[] =   {B10100000,
                  B00000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000000,
                  B00000001};

byte d_4_3[] =   {B10100000,
                  B00000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000010,
                  B00000001};

byte d_4_4[] =   {B10100000,
                  B00000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000000,
                  B00000101};

byte d_4_5[] =   {B10100000,
                  B00000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000010,
                  B00000101};

byte d_4_6[] =   {B10100000,
                  B00000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000101,
                  B00000101};

byte d_5_1[] =   {B10100000,
                  B01000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000010,
                  B00000000};

byte d_5_2[] =   {B10100000,
                  B01000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000010,
                  B00000001};

byte d_5_3[] =   {B10100000,
                  B01000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000010,
                  B00000001};

byte d_5_4[] =   {B10100000,
                  B01000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000000,
                  B00000101};

byte d_5_5[] =   {B10100000,
                  B01000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000010,
                  B00000101};

byte d_5_6[] =   {B10100000,
                  B01000000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000101,
                  B00000101};

byte d_6_1[] =   {B10100000,
                  B10100000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000000,
                  B00000010,
                  B00000000};

byte d_6_2[] =   {B10100000,
                  B10100000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000000,
                  B00000001};

byte d_6_3[] =   {B10100000,
                  B10100000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000100,
                  B00000010,
                  B00000001};

byte d_6_4[] =   {B10100000,
                  B10100000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000000,
                  B00000101};

byte d_6_5[] =   {B10100000,
                  B10100000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000010,
                  B00000101};

byte d_6_6[] =   {B10100000,
                  B10100000,
                  B10100000,
                  B00000000,
                  B00000000,
                  B00000101,
                  B00000101,
                  B00000101};

void setup() {

    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
    pinMode(A4, OUTPUT);
    pinMode(A5, OUTPUT);
    pinMode(A6, INPUT_PULLUP);
    pinMode(A7, INPUT_PULLUP);

    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, INPUT_PULLUP);
    
    Serial.begin(9600);
}

int randdomN = TrueRandom.random(1,37);

      
void loop() 
{
  Serial.print(randdomN);
  
  if (randdomN == 1) {
    drawScreen(d_1_1);
  }
    else if (randdomN == 2) {
    drawScreen(d_1_2);
  }
    else if (randdomN == 3) {
    drawScreen(d_1_3);
  }
    else if (randdomN == 4) {
    drawScreen(d_1_4);
  }
    else if (randdomN == 5) {
    drawScreen(d_1_5);
  }
    else if (randdomN == 6) {
    drawScreen(d_1_6);
  }
    else if (randdomN == 7) {
    drawScreen(d_2_1);
  }
    else if (randdomN == 8) {
    drawScreen(d_2_2);
  }
    else if (randdomN == 9) {
    drawScreen(d_2_3);
  }
    else if (randdomN == 10) {
    drawScreen(d_2_4);
  }
    else if (randdomN == 11) {
    drawScreen(d_2_5);
  }
    else if (randdomN == 12) {
    drawScreen(d_2_6);
  }
    else if (randdomN == 13) {
    drawScreen(d_3_1);
  }
    else if (randdomN == 14) {
    drawScreen(d_3_2);
  }
    else if (randdomN == 15) {
    drawScreen(d_3_3);
  }
    else if (randdomN == 16) {
    drawScreen(d_3_4);
  }
    else if (randdomN == 17) {
    drawScreen(d_3_5);
  }
    else if (randdomN == 18) {
    drawScreen(d_3_6);
  }
    else if (randdomN == 19) {
    drawScreen(d_4_1);
  }
    else if (randdomN == 20) {
    drawScreen(d_4_2);
  }
    else if (randdomN == 21) {
    drawScreen(d_4_3);
  }
    else if (randdomN == 22) {
    drawScreen(d_4_4);
  }
    else if (randdomN == 23) {
    drawScreen(d_4_5);
  }
    else if (randdomN == 24) {
    drawScreen(d_4_6);
  }
    else if (randdomN == 25) {
    drawScreen(d_5_1);
  }
    else if (randdomN == 26) {
    drawScreen(d_5_2);
  }
    else if (randdomN == 27) {
    drawScreen(d_5_3);
  }
    else if (randdomN == 28) {
    drawScreen(d_5_4);
  }
    else if (randdomN == 29) {
    drawScreen(d_5_5);
  }
    else if (randdomN == 30) {
    drawScreen(d_5_6);
  }
    else if (randdomN == 31) {
    drawScreen(d_6_1);
  }
    else if (randdomN == 32) {
    drawScreen(d_6_2);
  }
    else if (randdomN == 33) {
    drawScreen(d_6_3);
  }
    else if (randdomN == 34) {
    drawScreen(d_6_4);
  }
    else if (randdomN == 35) {
    drawScreen(d_6_5);
  }
    else {
    drawScreen(d_6_6);
  }
}

 void  drawScreen(byte buffer2[]){
     
    
   // Turn on each row in series
    for (byte i = 0; i < 8; i++) {
        setColumns(buffer2[i]); // Set columns for this specific row
        
        digitalWrite(rows[i], LOW);
        delay(1); // Set this to 50 or 100 if you want to see the multiplexing effect!
        digitalWrite(rows[i], HIGH);
        
    }
}

void setColumns(byte b) {
    digitalWrite(COL_1, (b >> 0) & 0x01); // Get the 1st bit: 10000000
    digitalWrite(COL_2, (b >> 1) & 0x01); // Get the 2nd bit: 01000000
    digitalWrite(COL_3, (b >> 2) & 0x01); // Get the 3rd bit: 00100000
    digitalWrite(COL_4, (b >> 3) & 0x01); // Get the 4th bit: 00010000
    digitalWrite(COL_5, (b >> 4) & 0x01); // Get the 5th bit: 00001000
    digitalWrite(COL_6, (b >> 5) & 0x01); // Get the 6th bit: 00000100
    digitalWrite(COL_7, (b >> 6) & 0x01); // Get the 7th bit: 00000010
    digitalWrite(COL_8, (b >> 7) & 0x01); // Get the 8th bit: 00000001
    
    // If the polarity of your matrix is the opposite of mine
    // remove all the '~' above.
}
