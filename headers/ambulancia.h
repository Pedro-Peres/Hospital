#ifndef AMBULANCIA_H_INCLUDED
#define AMBULANCIA_H_INCLUDED
void marcarAmbulancia() {
    char nome[100];
    int dia, mes;
    char morada[100];

    // Solicitar informações do usuário
    printf(R"EOF(
 | \| |___ _ __  ___  (_)
 | .` / _ \ '  \/ -_)  _
 |_|\_\___/_|_|_\___| (_))EOF");
 printf("\n\n");
 seta();
    scanf("%s", nome);
   
textcolor(6);
clrscr1();
printf(R"EOF(
 |   \(_)__ _  (_)
 | |) | / _` |  _
 |___/|_\__,_| (_))EOF");
 printf("\n\n");
 seta();
    scanf("%d", &dia);
    clrscr1();
textcolor(3);
 printf(R"EOF(
 |  \/  |___ ___ (_)
 | |\/| / -_)_-<  _
 |_|  |_\___/__/ (_))EOF");
 printf("\n\n");
 seta();
    scanf("%d", &mes);
    textcolor(15);
    clrscr1();
textcolor(5);
 printf(R"EOF(
 |  \/  |___ _ _ __ _ __| |__ _  (_)
 | |\/| / _ \ '_/ _` / _` / _` |  _ 
 |_|  |_\___/_| \__,_\__,_\__,_| (_))EOF");
 printf("\n\n");
 seta();
    scanf("%s", morada);
clrscr1();
    // Abrir o arquivo para escrita
    FILE *arquivo = fopen("ambulancias/ambulancia.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Escrever as informações no arquivo
    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Data: %d/%d\n", dia, mes);
    fprintf(arquivo, "Morada: %s\n", morada);
    fprintf(arquivo, "-------------------------\n");


    // Fechar o arquivo
    fclose(arquivo);
clrscr1();
 textcolor(2);
 printf(R"EOF(
   /_\  _ __ | |__ _  _| |__ _ _ _  __(_)__ _   _ __  __ _ _ _ __ __ _ __| |__ _   __ ___ _ __    ____  _ __ ___ _________| |
  / _ \| '  \| '_ \ || | / _` | ' \/ _| / _` | | '  \/ _` | '_/ _/ _` / _` / _` | / _/ _ \ '  \  (_-< || / _/ -_)_-<_-< _ \_|
 /_/ \_\_|_|_|_.__/\_,_|_\__,_|_||_\__|_\__,_| |_|_|_\__,_|_| \__\__,_\__,_\__,_| \__\___/_|_|_| /__/\_,_\__\___/__/__\___(_))EOF");
 printf("\n\n");
}
#endif