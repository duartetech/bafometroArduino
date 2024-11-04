#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x20 // Endereço I2C do LCD
#define GAS_SENSOR_PIN A0 // Pino onde o sensor de gás está conectado

// Definições dos pinos dos LEDs
#define LED_VERDE 3  // Pino do LED Verde
#define LED_AMARELO 2 // Pino do LED Amarelo
#define LED_VERMELHO 1 // Pino do LED Vermelho
int piezoPin = 4;


LiquidCrystal_I2C lcd(I2C_ADDR, 16, 2); // Cria um objeto LCD de 16 colunas e 2 linhas

void setup() {
  lcd.init(); // Inicializa o LCD
  lcd.backlight(); // Ativa a luz de fundo do LCD
  
  // Configura os pinos dos LEDs como saída
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(piezoPin, OUTPUT);
  
  lcd.setCursor(0, 0);
  lcd.print("Nivel de Alcool:");
  delay(1000); // Atraso para visualização
}

void loop() {
  int gasValue = analogRead(GAS_SENSOR_PIN); // Lê o valor do sensor de gás
  float percentage = map(gasValue, 400, 900, 0, 100); // Mapeia o valor para porcentagem
  
  // Exibe a porcentagem no LCD
  lcd.setCursor(0, 1); // Move o cursor para a segunda linha
  lcd.print(percentage); // Imprime a porcentagem
  lcd.print("%"); // Imprime o símbolo de porcentagem e limpa o resto da linha

  // Controle dos LEDs com base na qualidade do ar
  if (percentage < 30) {
    digitalWrite(LED_VERMELHO, LOW); // Desliga o LED Vermelho
    digitalWrite(LED_AMARELO, LOW); // Desliga o LED Amarelo
    digitalWrite(LED_VERDE, HIGH); // Acende o LED Verde
    noTone(piezoPin);
    
  } else if (percentage >= 30 && percentage <= 70) {
    digitalWrite(LED_VERMELHO, LOW); // Desliga o LED Vermelho
    digitalWrite(LED_AMARELO, HIGH); // Acende o LED Amarelo
    digitalWrite(LED_VERDE, LOW); // Desliga o LED Verde
    noTone(piezoPin);

  } else {
    digitalWrite(LED_VERMELHO, HIGH); // Acende o LED Vermelho
    digitalWrite(LED_AMARELO, LOW); // Desliga o LED Amarelo
    digitalWrite(LED_VERDE, LOW); // Desliga o LED Verde
    tone(piezoPin, 1000);
    
  }

  delay(2000); // Atraso para a próxima leitura
}
