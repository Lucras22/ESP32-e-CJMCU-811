# ESP32-e-CJMCU-811
O sensor de qualidade do ar CCS811 CJMCU-811 é um módulo compacto para detecção de dióxido de carbono (CO2) e compostos orgânicos voláteis (COV) no ar. Alimentado com 3,3V e compatível com a interface I2C, ele é fácil de integrar com microcontroladores como o ESP32. O CCS811 mede CO2 entre 400 e 32768 ppm e COV de 0 a 29206 ppb, oferecendo compensação de temperatura e filtragem para leituras precisas. Esse sensor é ideal para monitoramento de qualidade do ar em ambientes internos e externos, como residências, escolas e sistemas de ventilação, além de aplicações portáteis e de detecção de vazamentos.

## Estudado:
- Especificações do sensor: https://www.smartkits.com.br/sensor-de-qualidade-do-ar-co2-e-cov-ccs811-cjmcu-811?srsltid=AfmBOoqjDoPpsmungo4YxWLXBQZMbhaUV3fWBH9gwVaJ3j_jrszos6yp
- Especificações sobre a ligação do circuito: https://how2electronics.com/monitor-ccs811-co2-tvoc-on-esp8266-esp32-webserver/
- Especificações sobre a criação do codigo: https://www.adafruit.com/product/3566

# Sensor CJMCU-811
O sensor de gás que mede a concentração de dióxido de carbono (CO₂) em partes por milhão (ppm) e compostos orgânicos voláteis totais (TVOC) no ambiente.

A concentração de CO₂ varia bastante, indo de 400 ppm até 1852 ppm, e os valores de TVOC também sobem em alguns momentos. A oscilação nos valores provavelmente foi causada pelo meu ato de assoprar o sensor, pois isso altera a quantidade de CO₂ no ambiente ao redor do sensor. Quando assopro, o ar exalado contém uma concentração mais alta de CO₂ em comparação com o ar ambiente, o que faz com que o sensor detecte aumentos repentinos nos níveis de CO₂ e, em menor escala, nos níveis de TVOC.

# Sobre os dados:

TVOC:
- 0 - 50 ppb (Muito Baixo): Indicativo de um ambiente muito limpo e bem ventilado, com pouquíssimos compostos orgânicos voláteis presentes.
- 50 - 200 ppb (Baixo): Nível aceitável para ambientes internos comuns. Pequenos aumentos nessa faixa geralmente não representam riscos à saúde.
- 200 - 500 ppb (Moderado): Indica uma concentração crescente de VOCs, possivelmente devido a produtos de limpeza, sprays, fumos de cozinha, etc. Esse nível pode começar a causar desconforto para pessoas sensíveis.
- 500 - 1000 ppb (Alto): Um nível relativamente alto. Pode causar desconforto em ambientes fechados e é recomendado aumentar a ventilação.
- Acima de 1000 ppb (Muito Alto): Nível de TVOC alto, com um risco aumentado de sintomas de irritação e desconforto. Nesse nível, deve-se buscar reduzir as fontes de VOCs e aumentar a circulação de ar.

CO2
- 400 - 600 ppm (Baixo, Ambiente Natural): Representa o nível típico ao ar livre. Dentro dessa faixa, o ambiente é bem ventilado e saudável.
- 600 - 1000 ppm (Moderado): Esse nível é considerado aceitável para ambientes internos, como escritórios e residências. Nessa faixa, a maioria das pessoas não sente desconforto, mas já indica uma ventilação um pouco insuficiente.
- 1000 - 2000 ppm (Elevado): Pode causar desconforto e sintomas leves, como sonolência, falta de atenção e leve dor de cabeça, especialmente em pessoas mais sensíveis. Esse nível sugere que o ambiente precisa de melhor ventilação.
- 2000 - 5000 ppm (Muito Elevado): Provoca sintomas mais intensos, como dor de cabeça, tontura e sensação de abafamento. Esses níveis geralmente são encontrados em salas mal ventiladas com muita gente e representam uma condição de má qualidade do ar.
- Acima de 5000 ppm (Perigoso): Em níveis tão altos, o CO₂ pode causar efeitos graves à saúde, como falta de ar, aumento da pressão arterial e até perda de consciência em exposições prolongadas.

# imagens:
<img src="https://github.com/user-attachments/assets/7f4ea391-c424-4feb-9c26-d5af80e193f3" width="250"/>
<img src="https://github.com/user-attachments/assets/9bd77b6b-3375-41a9-abd3-6214ac27554f" width="250"/>
