# Monitor de Qualidade do Ar com Sensor de Gás

Este projeto é um monitor de qualidade do ar usando um sensor de gás, LEDs de status e um display LCD. O sistema mede a concentração de gás no ambiente e exibe o valor como uma porcentagem no LCD.

## Componentes

- Arduino Uno
- Sensor de Gás (conectado ao pino analógico A0)
- Display LCD 16x2 com comunicação I2C
- LEDs:
  - Verde (boa qualidade do ar)
  - Amarelo (qualidade moderada)
  - Vermelho (má qualidade do ar)
- Resistores para LEDs
- Fios de conexão

## Funcionamento

1. **Leitura do Sensor**: O Arduino lê o valor do sensor de gás analógico e converte a leitura em uma porcentagem, representando a qualidade do ar.
2. **Exibição no LCD**: A porcentagem é mostrada no display LCD 16x2, permitindo monitoramento em tempo real.
3. **Indicação por LEDs**:
   - **Verde**: Indica boa qualidade do ar (>= 70%).
   - **Amarelo**: Indica qualidade moderada do ar (entre 30% e 70%).
   - **Vermelho**: Indica má qualidade do ar (< 30%).

## Simulação

Você pode visualizar e simular o projeto no Tinkercad pelo link abaixo:

[Simulação do Projeto no Tinkercad](https://www.tinkercad.com/things/7BiPETMGZJn-projeto-iot-sensor-gas-qualidade-ar?sharecode=1JsZHx-zp9WJYykQb8O9KhATIxMsk8mP_KaZvcT5tWA)

## Como Usar

1. Conecte os componentes conforme o diagrama de montagem (veja a simulação no Tinkercad para referência).
2. Faça upload do código para o Arduino.
3. Ligue o sistema e observe a qualidade do ar sendo exibida no LCD e indicada pelos LEDs.
