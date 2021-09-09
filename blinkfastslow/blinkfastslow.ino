void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  for (int i=0; i<5;i++){
    
  digitalWrite(13, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
  for (int i=0; i<5;i++){
    
  digitalWrite(13, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
}
}
  
