## Descrição
Como projeto final para o EmbarcaTech, escrevi um código em C que é usado para tocar 
o hino da China usando um buzzer o passivo conectado no Raspberry Pi Pico W da placa BitDogLab. 
A escolha do hino é uma brincadeira com o fato de que atualmente as maiores inovações tecnológicas surgem na China.

# O código é baseado nos seguintes:

[https://github.com/BitDogLab/BitDogLab-C/blob/main/buzzer_pwm1/buzzer_pwm1.c](https://github.com/BitDogLab/BitDogLab-C/blob/main/buzzer_pwm1/buzzer_pwm1.c)
[https://github.com/BitDogLab/BitDogLab/blob/main/softwares/Festas/Menasagem%20de%20Natal%20A4.py](https://github.com/BitDogLab/BitDogLab/blob/main/softwares/Festas/Menasagem%20de%20Natal%20A4.py)

## Configuração
A música padrão é o hino da China, mas pode-se colocar outras músicas.
A Partir de um arquivo midi, é possível converter para um arquivo .ino utilizando 
o site [https://arduinomidi.netlify.app/](MIDI to Arduino Tone). Basta extrair a matriz de notas e substituir no arquivo .c 
modificando as dimensões.

Link para o projeto: [https://github.com/julianodsf/EmbarcaTech-TarefaFinal/tree/main](https://github.com/julianodsf/EmbarcaTech-TarefaFinal/tree/main)
