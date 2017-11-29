const int tempPin = 0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
static int line = 0;
  
line = line + 1;
float temp, volt;
volt = pinVoltage(tempPin);
temp = (volt - 0.5) * 100.0;

Serial.print("line:");
Serial.print(" | ");
Serial.print(line);

Serial.print(" | ");
Serial.print(" temperature: ");
Serial.print(" | ");
Serial.print(temp);

Serial.print(" | ");
Serial.print(" voltage: ");
Serial.print(" | ");
Serial.print(volt);
Serial.println(" | ");

delay(2000);
}

float pinVoltage (int pin)

{
return (analogRead(pin) * 0.004882814);
}
