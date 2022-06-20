const int gatilho = 3;
const int rele = 2;

void setup()
{
  pinMode(gatilho, INPUT);
  pinMode(rele, OUTPUT);
}

void loop()
{
  if (digitalRead(gatilho)){
    digitalWrite(rele, HIGH);
  }
  else{
    digitalWrite(rele, LOW);
  }
}
