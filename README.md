# Bafômetro com Sensor de Álcool

Este projeto é um bafômetro que utiliza um sensor de gás para detectar a concentração de álcool no ambiente. O sistema exibe o valor como uma porcentagem em um display LCD e indica o nível de álcool por LEDs de status e um alarme sonoro.

## Componentes

- Arduino Uno
- Sensor de Gás MQ-3 (conectado ao pino analógico A0)
- Display LCD 16x2 com interface I2C
- LEDs:
  - Verde (baixo nível de álcool)
  - Amarelo (nível moderado de álcool)
  - Vermelho (alto nível de álcool)
- Buzzer piezoelétrico
- Resistores para LEDs
- Fios de conexão

## Funcionamento

1. **Leitura do Sensor**: O Arduino lê o valor do sensor de gás analógico e mapeia a leitura para uma porcentagem, representando a concentração de álcool.
2. **Exibição no LCD**: A porcentagem é mostrada no display LCD 16x2, permitindo monitoramento em tempo real.
3. **Indicação por LEDs e Alarme**:
   - **Verde**: Indica baixo nível de álcool (< 30%).
   - **Amarelo**: Indica nível moderado de álcool (entre 30% e 70%).
   - **Vermelho e Buzzer**: Indica alto nível de álcool (> 70%), com alerta sonoro.

## Simulação

Você pode visualizar e simular o projeto no Tinkercad pelo link abaixo:

[simulação do Protótipo do Projeto no Tinkercad](https://www.tinkercad.com/things/7BiPETMGZJn-projeto-iot-prototipo-bafometro?sharecode=1JsZHx-zp9WJYykQb8O9KhATIxMsk8mP_KaZvcT5tWA)

## Como Usar

1. Conecte os componentes conforme o diagrama de montagem (veja a simulação no Tinkercad para referência).
2. Faça upload do código para o Arduino.
3. Ligue o sistema e observe o nível de álcool sendo exibido no LCD, indicado pelos LEDs, e alertado pelo buzzer em caso de alta concentração.