#include <SoftwareSerial.h>

SoftwareSerial gsm(10, 11);

void setup() {
  gsm.begin(9600);
}

void sendSMS() {
  gsm.println("AT+CMGF=1");
  delay(1000);

  gsm.println("AT+CMGS=\"+91XXXXXXXXXX\"");
  delay(1000);

  gsm.println("Earthquake Alert!");
  delay(100);

  gsm.write(26);
}
