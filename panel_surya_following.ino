
#include <DS3231.h> //mengincludekan library DS3231
 
DS3231  rtc(SDA, SCL); // inisialisasi penggunaan i2c
Time waktu;
int iteration = 0;

#define dirPin 2 
#define stepPin 3
#define stepsPerRevolution 400 // sesuaikan dengan settingan SW1-SW3 pada modul motor driver
void setup() {

  Serial.begin(115200); //set komunikasi baut serial monitor pada 115200
  rtc.begin();
  
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

  
}
void loop()
{
  waktu = rtc.getTime();
  int dataJam = waktu.hour;     
  int dataMenit = waktu.min;
  int dataDetik = waktu.sec;
//  Serial.println(iteration);

 if(dataJam==10){
    Serial.println("jam 10");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration>20){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  else if(dataJam==12){
    Serial.println("jam 12");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<50){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  else if(dataJam==14){
    Serial.println("jam 14");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<70){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  else if(dataJam==16){
    Serial.println("jam 16");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<100){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  else if(dataJam==17){
    Serial.println("jam 17");
    digitalWrite(dirPin, LOW); // putar searah jarum jam
    while(iteration>0){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration--;
    }
  }
  else{
    Serial.println("night");
  }

}
 
