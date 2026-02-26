// C++ code

void setup()
{
  pinMode(14, OUTPUT);//função de saida de pino 13
}

void loop()
{
	digitalWrite(14, HIGH);//acende o led
  	delay(1000);//por 2 segundos
  	digitalWrite(14, LOW); //apaga o led
  	delay(1000);//por 2 segundos
}