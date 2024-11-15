//Projeto Bafometro

#define sensorDigital 3      // Pino digital do sensor MQ-3
#define sensorAnalog A0      // Pino analógico do sensor MQ-3
#define ledStart 4           // Pino inicial do LED Bar Graph
#define ledEnd 13            // Pino final do LED Bar Graph
#define buzzer 2           // Pino do Buzzer

void setup() {
  pinMode(sensorDigital, INPUT); // Configura o pino digital como entrada
  pinMode(buzzer, OUTPUT);       // Configura o pino do buzzer como saída
  
  // Configura os pinos do LED Bar Graph como saída
  for (int i = ledStart; i <= ledEnd; i++) {
    pinMode(i, OUTPUT);
  }
  
  Serial.begin(9600);  // Inicia a comunicação serial
}

void loop() {
  bool digital = digitalRead(sensorDigital); // Lê o valor digital do sensor
  int analog = analogRead(sensorAnalog);     // Lê o valor analógico do sensor

  // Mapeamento do valor analógico (0-1023) para o número de LEDs acesos (0-10)
  int ledsOn = map(analog, 0, 400, 0, 10); // Mapeia o valor para o intervalo 0-10

  // Controle do LED Bar Graph
  for (int i = ledStart; i <= ledEnd; i++) {
    if (i - ledStart < ledsOn) {
      digitalWrite(i, HIGH);  // Acende o LED
    } else {
      digitalWrite(i, LOW);   // Apaga o LED
    }
  }

  // Lógica para acionar o buzzer apenas quando os últimos 3 LEDs (10, 11, 12) acenderem
  if (ledsOn >= 9) {  // Se o número de LEDs acesos for maior ou igual a 8
    digitalWrite(buzzer, HIGH); // Liga o buzzer
  } else {
    digitalWrite(buzzer, LOW);  // Desliga o buzzer
  }

  delay(200);  // Aguarda 200ms para a próxima leitura
}
