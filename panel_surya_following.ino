
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

 if(dataJam==7){
    Serial.println("masuk");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<50){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  
  if(dataJam==9){
    Serial.println("masuk");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<70){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  if(dataJam==10){
    Serial.println("masuk");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<80){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  if(dataJam==11){
    Serial.println("masuk");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<90){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }


  if(dataJam==12){
    Serial.println("masuk");
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<100){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  if(dataJam==13){
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<110){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  if(dataJam==14){
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<120){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  if(dataJam==15){
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<130){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
  if(dataJam==16){
    digitalWrite(dirPin, HIGH); // putar searah jarum jam
    while(iteration<150){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration++;
    }
  }
 
  if(dataJam==18){
    digitalWrite(dirPin, LOW); // putar searah jarum jam
    while(iteration>50){
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      digitalWrite(stepPin, LOW);
      delayMicroseconds(10000); // ganti delay untuk mempercepat motor
      iteration--;
    }
  }
}
 
