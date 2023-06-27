#ifndef VISITAS_H_INCLUDED
#define VISITAS_H_INCLUDED

void visita(){
    char nome[50];
    int numero_doente,select;
    
    textcolor(2);
printf(R"EOF(
 / |___| || |___ ____ __(_) |_ __ _| | |   \ ___ _ _  __ _  | __|___ |_ ___ / _|__ _ _ _ (_)__ _ 
 | |___| __ / _ (_-< '_ \ |  _/ _` | | | |) / _ \ ' \/ _` | | _|(_-<  _/ -_)  _/ _` | ' \| / _` |
 |_|   |_||_\___/__/ .__/_|\__\__,_|_| |___/\___/_||_\__,_| |___/__/\__\___|_| \__,_|_||_|_\__,_|
                   |_|)EOF");
                   printf("\n\n");
                   textcolor(4);
printf(R"EOF(
 |_  )__| || |___ ____ __(_) |_ __ _| |  / __|___ _ _ __ _| |  __| |___  / __|__ _ _ _| |_ ___    /_\  _ _| |_ ___ _ _ (_)___ 
  / /___| __ / _ (_-< '_ \ |  _/ _` | | | (_ / -_) '_/ _` | | / _` / -_) \__ \ _` | ' \  _/ _ \  / _ \| ' \  _/ _ \ ' \| / _ \
 /___|  |_||_\___/__/ .__/_|\__\__,_|_|  \___\___|_| \__,_|_| \__,_\___| |___\__,_|_||_\__\___/ /_/ \_\_||_\__\___/_||_|_\___/
                    |_|)EOF");
                    printf("\n\n");
                    textcolor(1);
printf(R"EOF(
 |__ /___ / __|___ _ _| |_ _ _ ___  | || |___ ____ __(_) |_ __ _| |__ _ _ _   __| |___  | _ )__ _ _ _| |__ ___ _____ _ _| |_ ___    /_\ | |__ _ __ _ _ ___ ___)___ 
  |_ \___| (__/ -_) ' \  _| '_/ _ \ | __ / _ (_-< '_ \ |  _/ _` | / _` | '_| / _` / _ \ | _ \ _` | '_| / _` \ V / -_) ' \  _/ _ \  / _ \| / _` / _` | '_\ V / / _ \
 |___/    \___\___|_||_\__|_| \___/ |_||_\___/__/ .__/_|\__\__,_|_\__,_|_|   \__,_\___/ |___\__,_|_| |_\__,_|\_/\___|_||_\__\___/ /_/ \_\_\__, \__,_|_|  \_/|_\___/
                                                |_|                                                                                       |___/)EOF");
                                                printf("\n\n");
                                                textcolor(6);
printf(R"EOF(
 | | | ___| || |___ ____ __(_) |_ __ _| |  __| |___  | _ )_ _ __ _ __ _ __ _ 
 |_  _|___| __ / _ (_-< '_ \ |  _/ _` | | / _` / -_) | _ \ '_/ _` / _` / _` |
   |_|    |_||_\___/__/ .__/_|\__\__,_|_| \__,_\___| |___/_| \__,_\__, \__,_|
                      |_|                                         |___/)EOF");
                      printf("\n\n");
                      textcolor(5);
printf(R"EOF(
 | __|___| || |___ ____ __(_) |_ __ _| |  __| |__ _  | |  _  _ ___
 |__ \___| __ / _ (_-< '_ \ |  _/ _` | | / _` / _` | | |__ || |_ /
 |___/   |_||_\___/__/ .__/_|\__\__,_|_| \__,_\__,_| |____\_,_/__|
                     |_|)EOF");   
                     printf("\n\n"); 
                     textcolor(15);  
                     seta();             

scanf("%i", &select);

if(select==1){
    hospital == "Hospital Dona Estefani";
}
else if(select==2){
    hospital == "Hospital Geral de Santo Antonio";
}
else if(select==3){
    hospital == "Centro Hospitalar de Barlavento Algarvio";
}
else if(select==4){
    hospital == "Hospital de Braga";
}
else if(select==5){
    hospital == "Hospital da Luz";
}

clrscr1();
textcolor(6);
printf(R"EOF(
 | \| |___ _ __  ___  (_)
 | .` / _ \ '  \/ -_)  _
 |_|\_\___/_|_|_\___| (_))EOF");
 printf("\n\n");
 seta();
    fflush(stdin);
    gets(nome);

clrscr1();
textcolor(6);
printf(R"EOF(
 | \| |_  _ _ __  ___ _ _ ___  | _ \__ _ __(_)___ _ _| |_ ___ 
 | .` | || | '  \/ -_) '_/ _ \ |  _/ _` / _| / -_) ' \  _/ -_)
 |_|\_|\_,_|_|_|_\___|_| \___/ |_| \__,_\__|_\___|_||_\__\___|)EOF");
 printf("\n\n");
 seta();
    scanf("%d", &numero_doente);

    // Abrir o arquivo em modo de escrita
    FILE *arquivo = fopen("visita/visitas.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escrever as informações no arquivo
    fprintf(arquivo, "Nome: %s", nome);
    fprintf(arquivo, "Hospital: %s", hospital);
    fprintf(arquivo, "Número do paciente: %d\n", numero_doente);
    fprintf(arquivo, "-------------------------\n");


    // Fechar o arquivo
    fclose(arquivo);
clrscr1();
    carregar();
}

#endif // VISITAS_H_INCLUDED
