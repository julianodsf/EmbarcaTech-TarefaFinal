##Descrição
Como projeto final para o EmbarcaTech, escrevi um código em C que é usado para tocar o hino da China usando um buzzer o passivo conectado no Raspberry Pi Pico W da placa BitDogLab. A escolha do hino é uma brincadeira com o fato de que atualmente as maiores inovações tecnológicas surgem na China.
O código é baseado nos seguintes:
BitDogLab-C/buzzer_pwm1/buzzer_pwm1.c at main · BitDogLab/BitDogLab-C
BitDogLab/softwares/Festas/Menasagem de Natal A4.py at main · BitDogLab/BitDogLab
Configuração
A música padrão é o hino da China, mas pode-se colocar outras músicas.
A Partir de um arquivo midi, é possível converter para um arquivo .ino utilizando o site MIDI to Arduino Tone. Basta extrair a matriz de notas e substituir no arquivo .c modificando as dimensões.

Link para o projeto: julianodsf/EmbarcaTech-TarefaFinal
