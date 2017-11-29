    int sensorPin = 0; // номер пина к которому подключаем data .

    void setup()

{

      Serial.begin(9600); // скорость передачи .
}

    void loop()

{

     int reading = analogRead(sensorPin);  

     float voltage = reading * 5.0;

     voltage /= 1024.0; 

     float temperatureC = (voltage - 0.5) * 100 ;

     Serial.println(temperatureC);

     delay(1000); // задержка в миллисекундах .

}
