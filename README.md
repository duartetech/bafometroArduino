# Projeto Bafômetro com Sensor MQ-3 e LED Bar Graph

Este é um projeto de bafômetro utilizando o sensor MQ-3 para detectar a presença de álcool no ar. Conforme a concentração de álcool aumenta, os LEDs no bar graph acendem, indicando o nível de álcool detectado. Quando o nível de álcool atinge um limite alto, um buzzer é acionado.

## Componentes Utilizados

- Arduino Uno
- Sensor MQ-3 (sensor de álcool)
- LED Bar Graph (10 LEDs)
- Buzzer
- Resistores
- Jumpers
- Protoboard

## Configuração do Hardware

1. **Sensor MQ-3**: Conectado ao pino digital `2` e ao pino analógico `A1` no Arduino.
2. **LED Bar Graph**: Conectado aos pinos `3` a `12` no Arduino.
3. **Buzzer**: Conectado ao pino `13` no Arduino.

O sensor MQ-3 detecta a concentração de álcool no ar e envia o valor para o Arduino. Esse valor é utilizado para acender um número correspondente de LEDs no bar graph. Quando a concentração de álcool atinge um limite, o buzzer é acionado.

## Funcionamento

1. **Leitura do Sensor**: O valor do sensor MQ-3 é lido pelo pino analógico `A1`.
2. **Controle do LED Bar Graph**: Com base na concentração de álcool detectada, um número correspondente de LEDs é aceso, de 0 a 10.
3. **Acionamento do Buzzer**: O buzzer é ativado quando 8 ou mais LEDs estão acesos, indicando uma alta concentração de álcool.

## Ajuste da Sensibilidade

A sensibilidade do bafômetro pode ser ajustada modificando o mapeamento na faixa de leitura do sensor. Isso permite definir a partir de qual concentração de álcool o bafômetro deve acionar o buzzer.

## Como Executar

1. Conecte os componentes conforme descrito na seção de hardware.
2. Carregue o código no Arduino usando a Arduino IDE.
3. Aproxime uma fonte de álcool (como uma bebida) do sensor para testar o funcionamento.
4. Observe o comportamento dos LEDs e do buzzer à medida que a concentração de álcool detectada aumenta.
