#include <Arduino.h>
int contador = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  contador++;
  if (contador > 10)
  {
    contador = 0;
  }
  Serial.println(contador);
  delay(1000);
}