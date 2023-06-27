#ifndef VACINAS_H_INCLUDED
#define VACINAS_H_INCLUDED


void Mvacina(){

FILE *arquivo;
    char nome_arquivo[] = "vacina/vacinas.txt";
    int dia, mes,ano;
    char nome[50];

    arquivo = fopen(nome_arquivo, "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Solicitar dia e m�s ao usu�rio
    textcolor(1);
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
 |   \(_)__ _  (_)
 | |) | / _` |  _
 |___/|_\__,_| (_))EOF");
 printf("\n\n");
 seta();
    scanf("%d", &dia);
    clrscr1();
textcolor(5);
printf(R"EOF(
 |  \/  |___ ___ (_)
 | |\/| / -_)_-<  _
 |_|  |_\___/__/ (_))EOF");
 printf("\n\n");
 seta();
    scanf("%d", &mes);
    clrscr1();
textcolor(3);
printf(R"EOF(
   /_\  _ _  ___  (_)
  / _ \| ' \/ _ \  _
 /_/ \_\_||_\___/ (_))EOF");
 printf("\n\n");
 textcolor(15);
 seta();
    scanf("%d", &ano);
       clrscr1();

    // Escrever as informa��es da consulta no arquivo
    fprintf(arquivo, "\nNome: %s,", nome);
    fprintf(arquivo, "  Consulta marcada para o dia %d/%d.%d\n", dia, mes,ano);
    fprintf(arquivo, "---------------------------------------------------");


    // Fechar o arquivo
    fclose(arquivo);

 textcolor(2);
printf(R"EOF(
 \ \ / /_ _ __(_)_ _  __ _   _ __  __ _ _ _ __ __ _ __| |__ _   __ ___ _ __    ____  _ __ ___ _________| |
  \ V / _` / _| | ' \/ _` | | '  \/ _` | '_/ _/ _` / _` / _` | / _/ _ \ '  \  (_-< || / _/ -_)_-<_-< _ \_|
   \_/\__,_\__|_|_||_\__,_| |_|_|_\__,_|_| \__\__,_\__,_\__,_| \__\___/_|_|_| /__/\_,_\__\___/__/__\___(_)  
)EOF");

 textcolor(15);
}
void Vvacina(){


FILE *arquivo;
    char nome_arquivo[] = "vacina/vacinas.txt";
    char linha[100];

    // Abrir o arquivo no modo de leitura ("r")
    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Ler e exibir o conte�do do arquivo linha por linha
    textcolor(3);
    printf(R"EOF(
 \ \ / /_ _ __(_)_ _  __ _ ___ |  \/  |__ _ _ _ __ __ _ __| |__ _ ___
  \ V / _` / _| | ' \/ _` (_-< | |\/| / _` | '_/ _/ _` / _` / _` (_-<
   \_/\__,_\__|_|_||_\__,_/__/ |_|  |_\__,_|_| \__\__,_\__,_\__,_/__/)EOF");
 printf("\n\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    // Fechar o arquivo
    fclose(arquivo);

}


#endif // VACINAS_H_INCLUDED
