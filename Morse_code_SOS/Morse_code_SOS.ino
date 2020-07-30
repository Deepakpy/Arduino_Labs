// Morse Code SOS Using Arrays
const int ledPin = 13; //Inbuilt led can be accessed with pin 13

int time_intervals[] = {200, 200, 200, 500, 500, 500, 200, 200, 200};

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop()  {
  for (int i = 0; i < 9; i++) {
    flash(time_intervals[i]);
  }
  delay(1000);
}

void flash(int interval) {
   digitalWrite(ledPin, HIGH);
   delay(interval);
   digitalWrite(ledPin, LOW);
   delay(interval);
}
