#include "Adafruit_CCS811.h"

Adafruit_CCS811 ccs;

void setup() {
Serial.begin(115200);

Serial.println("CCS811 teste");

  //Iniciando o I2C do sensor
if(!ccs.begin()){
Serial.println("Erro ao iniciar sensor.");
while(1);
}

//Calibrando a temperatura padrão do sensor
while(!ccs.available());
float temp = ccs.calculateTemperature();
ccs.setTempOffset(temp - 25.0);
}

void loop() {
if(ccs.available()){
float temp = ccs.calculateTemperature();
if(!ccs.readData()){
Serial.print("CO2: ");
Serial.print(ccs.geteCO2());
Serial.print("ppm, TVOC: ");
Serial.print(ccs.getTVOC());
Serial.print("ppb Temp:");
Serial.println(temp);
}
else{
Serial.println("ERROR!");
while(1);
}
}
delay(500);
}
