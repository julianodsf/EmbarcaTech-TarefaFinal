#include <stdio.h>
#include "pico/stdlib.h"

#define BUZZER_PIN 21  // O pino do buzzer

// Definição das frequências das notas musicais
#define D4 294
#define G4 392
#define E4 330
#define Fb4 370
#define B4 494
#define A4 440
#define D5 587
#define E5 659

// Notas, duração e pausas das notas em milissegundos
const int hino[84][3] = {
    {D4, 267, 46},
    {G4, 892, 46},
    {G4, 267, 46},
    {G4, 423, 46},
    {G4, 111, 46},
    {D4, 267, 46},
    {E4, 111, 46},
    {Fb4, 111, 46},
    {G4, 579, 46},
    {G4, 579, 358},
    {B4, 267, 46},
    {G4, 267, 46},
    {A4, 111, 46},
    {B4, 111, 46},
    {D5, 579, 46},
    {D5, 579, 46},
    {B4, 423, 46},
    {B4, 111, 46},
    {G4, 423, 46},
    {B4, 111, 46},
    {D5, 423, 46},
    {B4, 111, 46},
    {A4, 579, 46},
    {A4, 1204, 46},
    {E5, 579, 46},
    {D5, 579, 46},
    {A4, 579, 46},
    {B4, 579, 46},
    {D5, 267, 46},
    {B4, 267, 358},
    {D5, 267, 46},
    {B4, 267, 46},
    {A4, 111, 46},
    {B4, 111, 46},
    {G4, 579, 46},
    {B4, 579, 671},
    {D4, 423, 46},
    {E4, 111, 46},
    {G4, 267, 46},
    {G4, 267, 46},
    {B4, 423, 46},
    {B4, 111, 46},
    {D5, 267, 46},
    {D5, 267, 46},
    {A4, 267, 46},
    {A4, 111, 46},
    {A4, 111, 46},
    {E4, 579, 46},
    {A4, 892, 46},
    {D4, 267, 46},
    {G4, 892, 46},
    {G4, 267, 46},
    {B4, 892, 46},
    {B4, 267, 46},
    {D5, 1204, 46},
    {G4, 423, 46},
    {B4, 111, 46},
    {D5, 267, 46},
    {D5, 267, 46},
    {E5, 579, 46},
    {D5, 579, 46},
    {G4, 111, 98},
    {D5, 111, 98},
    {D5, 111, 98},
    {D5, 111, 98},
    {B4, 579, 46},
    {G4, 579, 46},
    {D4, 579, 46},
    {G4, 579, 46},
    {G4, 111, 98},
    {D5, 111, 98},
    {D5, 111, 98},
    {D5, 111, 98},
    {B4, 579, 46},
    {G4, 579, 46},
    {D4, 579, 46},
    {G4, 579, 46},
    {D4, 579, 46},
    {G4, 579, 46},
    {D4, 579, 46},
    {G4, 579, 46},
    {G4, 579, 0},
};

// funcao para tocar cada nota da música
void playHinoDaChina(uint buzzer_pin, const int notas[][3], size_t tam) {
    for (size_t i = 0; i < tam; i++) {
        int frequencia = notas[i][0];
        int duracao = notas[i][1];
        int pausa = notas[i][2];

        // Gera o tom
        int period = 1000000 / frequencia;  // Período do som em microssegundos
        int pulse_width = period / 2;      // Largura do pulso em microssegundos

        for (int j = 0; j < (duracao * 1000) / period; j++) {
            gpio_put(buzzer_pin, 1);
            sleep_us(pulse_width);
            gpio_put(buzzer_pin, 0);
            sleep_us(pulse_width);
        }

        // Pausa entre as notas
        sleep_ms(pausa);
    }
}

int main() {
    stdio_init_all();
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);

    // Toca o hina da China em loop
    while(1){
        playHinoDaChina(BUZZER_PIN, hino, sizeof (hino) / sizeof (hino[0]));   
    }

    return 0;
}
