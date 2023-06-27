#ifndef CARREGAR_H_INCLUDED
#define CARREGAR_H_INCLUDED

int carregar(){

int total_frames = 50; // Numero total de frames da animacao
    int tempo_espera = 1000; // Tempo de espera entre os frames (em microssegundos)

   
    for (int i = 0; i <= 100; i++) {
        // Calcula a quantidade de caracteres da barra preenchida
        int num_caracteres = (i * total_frames) / 100;

        // Limpa a linha anterior
        printf("\r");

        // Exibe a barra de preenchimento
        printf("[");
        for (int j = 0; j < num_caracteres; j++) {
            printf("=");
        }
        for (int j = num_caracteres; j < total_frames; j++) {
            printf(" ");
        }
        printf("] %d%%", i);

        
        fflush(stdout);

        // Aguarda o tempo de espera entre os frames
        usleep(tempo_espera);
    }

    printf("\n");


    }
int entrada() {

    int total_frames = 50; // Numero total de frames da animacao
    int tempo_espera = 10000; // Tempo de espera entre os frames (em microssegundos)

    // Loop para exibir a anima��o
    for (int i = 0; i <= 100; i++) {
        
        int num_caracteres = (i * total_frames) / 100;

       
        printf("\r");

       
        printf("[");
        for (int j = 0; j < num_caracteres; j++) {
            printf("=");
        }
        for (int j = num_caracteres; j < total_frames; j++) {
            printf(" ");
        }
        printf("] %d%%", i);

        
        fflush(stdout);

        
        usleep(tempo_espera);
    }

    printf("\n");


}


#endif // CARREGAR_H_INCLUDED
