#include <Servo.h>            // servo library 
#include <SoftwareSerial.h>    // TX RX software library for bluetooth

Servo servo1;// create servo object to control a servo
Servo servo2;

int bluetoothTx = 10; // bluetooth tx to 10 pin
int bluetoothRx = 11; // bluetooth rx to 11 pin
SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup()
{
  //Setup usb serial connection to computer
  Serial.begin(115200); 
  servo1.attach(8);
  servo2.attach(9);
  servo1.write(25);
  servo2.write(70);
  

  //Setup Bluetooth serial connection to android
  bluetooth.begin(115200);
}

void loop()
{
  /* add main program code here */ 
   if (bluetooth.available()>0)
{
    if (bluetooth.available()> 2 )
  {
    unsigned int servopos = bluetooth.read();
    unsigned int servopos1 = bluetooth.read();
    unsigned int realservo = (servopos1 *256) + servopos;

    if (realservo >= 1000 && realservo <1180) {
      int servoA = realservo;
      servoA = map(servoA, 1000, 1180, 90, 0);
      servo1.write(servoA);
    }
    if (realservo >= 2000 && realservo <2180) {
      int servoB = realservo;
      servoB = map(servoB, 2000, 2180, 0, 150);
      servo2.write(servoB);
    }
  }
  else if (bluetooth.available()<= 1) 
  {
    int valA = bluetooth.read();
    if (valA == 'C')
    { 
      servo1.write(90);
      delay (10);
    }
    if (valA == 'D')
    {
      servo1.write(0);
      delay (10);
    }
    if (valA == 'A')
    {
      servo2.write(0);
      delay (10);
    }
    if (valA == 'B')
    {
      servo2.write(150);
      delay (10);
    }
  }
}
   if (Serial.available())
   {
	   int valB = Serial.read();
	   if (valB == 'C')
	   {
		   servo1.write(90);
       delay (10);
	   }
	   if (valB == 'D')
	   {
		   servo1.write(0);
		   delay(10);
	   }
	   if (valB == 'A')
	   {
		   servo2.write(0);
		   delay(10);
	   }
	   if (valB == 'B')
	   {
		   servo2.write(150);
		   delay(10);
	   }

   }
}
