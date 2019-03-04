// plug buzzer into pin 3 and GND and that is all you really should need to do
// the lower notes at the end don't really sound that good, I don't know why and I couldn't really fix it


const int buzzer = 3; //buzzer on pin 3

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

//tone(buzzer, note); plays note
//delay(play);        time it runs for (5=one frame)
//noTone(buzzer);     stop sound

void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 3 as an output

}

void loop(){
 
  tone(buzzer, NOTE_CS3); // row 00
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); // row 01
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 02
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); // row 03
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4); //row 04
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_D4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 05
  delay(800);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(800);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4);
  delay(1200);
  noTone(buzzer);
  delay(400);
  tone(buzzer, NOTE_FS4); //row 06
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(150);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(750);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 07
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 08
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 09
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4); //row 0A
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 0B
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_E3); //row 0C
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_GS3);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(600);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 0D
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_E3); //row 0E
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(50);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_F3);
  delay(800);
  noTone(buzzer);
  tone(buzzer, NOTE_GS3);
  delay(800);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 0F
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4); //row 10
  delay(1200);
  noTone(buzzer);
  delay(400);
  tone(buzzer, NOTE_FS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 11
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4); //row 12
  delay(1200);
  noTone(buzzer);
  delay(400);
  tone(buzzer, NOTE_FS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 13
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4); //row 14
  delay(1200);
  noTone(buzzer);
  delay(400);
  tone(buzzer, NOTE_FS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3); //row 15
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4); //row 16
  delay(1200);
  noTone(buzzer);
  delay(400);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_E4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2); //row 17
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2); //row 18
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_A1);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS1);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A1);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B1);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_A3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_B3);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS4);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2); //row 19
  delay(400);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_FS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2); //row 1A
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_GS2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_B2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(200);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(100);
  noTone(buzzer);
  tone(buzzer, NOTE_CS3);
  delay(300);
  noTone(buzzer);
  tone(buzzer, NOTE_G2);
  delay(200);
  noTone(buzzer); // the end finally
  

  

}
