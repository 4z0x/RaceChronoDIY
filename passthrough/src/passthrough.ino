HardwareSerial GPSSerial1(1);

#define GPS_RX 22 //RX on GPS module
#define GPS_TX 23 //TX on GPS module

void setup() {
  Serial.begin(115200);

  GPSSerial1.begin(9600, SERIAL_8N1, GPS_RX, GPS_TX);
}

void loop() {

  if (Serial.available()) {      // If anything comes in Serial (USB),
    GPSSerial1.write(Serial.read());   // read it and send it out Serial1 (pins 0 & 1)
  }

  if (GPSSerial1.available()) {     // If anything comes in Serial1 (pins 0 & 1)
    Serial.write(GPSSerial1.read());   // read it and send it out Serial (USB)
  }
}
