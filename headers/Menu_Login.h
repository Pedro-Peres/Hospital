#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void registrarUsuario() {
    FILE* users;
    char nome[100], nomecompleto[100], nomePasta[100], password[100], idade[3], morada[1000];
textcolor(5);
    printf(R"EOF(
 | \| |___ _ __  ___   __ ___ _ __  _ __| |___| |_ ___ 
 | .` / _ \ '  \/ -_) / _/ _ \ '  \| '_ \ / -_)  _/ _ \
 |_|\_\___/_|_|_\___| \__\___/_|_|_| .__/_\___|\__\___/
                                   |_|)EOF");
 printf("\n\n");
 textcolor(15);
 seta();
    fflush(stdin);
    gets(nomecompleto);
    clrscr1();

textcolor(2);
    printf(R"EOF(
 |_ _|__| |__ _ __| |___ 
  | |/ _` / _` / _` / -_)
 |___\__,_\__,_\__,_\___|)EOF");
 printf("\n\n");
 textcolor(15);
 seta();
    fflush(stdin);
    gets(idade);
    clrscr1();

 textcolor(6);
    printf(R"EOF(
 |  \/  |___ _ _ __ _ __| |__ _ 
 | |\/| / _ \ '_/ _` / _` / _` |
 |_|  |_\___/_| \__,_\__,_\__,_|)EOF");
 printf("\n\n");
 textcolor(15);
 seta();
    fflush(stdin);
    gets(morada);
clrscr1();
  textcolor(3);
    printf(R"EOF(
 | \| |___ _ __  ___   __| |___  | | | |____  _ __ _ _ _(_)___ 
 | .` / _ \ '  \/ -_) / _` / -_) | |_| (_-< || / _` | '_| / _ \
 |_|\_\___/_|_|_\___| \__,_\___|  \___//__/\_,_\__,_|_| |_\___/)EOF");
 printf("\n\n");
 textcolor(15);
 seta();
    fflush(stdin);
    gets(nome);
clrscr1();
  textcolor(1);
    printf(R"EOF(
 / __|___ _ _ | |_  __ _ 
 \__ \ -_) ' \| ' \/ _` |
 |___\___|_||_|_||_\__,_|)EOF");
 printf("\n\n");
 textcolor(15);
 seta();
    fflush(stdin);
    gets(password);
clrscr1();
    sprintf(nomePasta, "users/%s", nome);
    mkdir(nomePasta);

    char filePath[150];
    sprintf(filePath, "%s/user_info.txt", nomePasta);

    users = fopen(filePath, "w");
    if (users == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(users, "Nome Completo: %s\n", nomecompleto);
    fprintf(users, "Idade: %s\n", idade);
    fprintf(users, "Nome de usuário: %s\n", nome);
    fprintf(users, "Senha: %s\n", password);
    fprintf(users, "Morada: %s\n", morada);

    fclose(users);

    printf("Usuário registrado com sucesso!\n");
}


int buscarUsuario(char *username, char *password) {
    char nomePasta[150];
    sprintf(nomePasta, "users/%s/user_info.txt", username);

    FILE *file = fopen(nomePasta, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    char buffer[1000];
    char *line;
    while ((line = fgets(buffer, sizeof(buffer), file)) != NULL) {
        if (strstr(line, "Nome de usuário: ") != NULL) {
            char foundUsername[100];
            sscanf(line, "Nome de usuário: %[^\n]", foundUsername);
            if (strcmp(foundUsername, username) == 0) {
                line = fgets(buffer, sizeof(buffer), file); 
                char foundPassword[100];
                sscanf(line, "Senha: %[^\n]", foundPassword);
                fclose(file);  // Fechar o arquivo

                if (strcmp(password, foundPassword) == 0) {
                    return 1;  // Senha correta, usuário encontrado
                } else {
                    return 2;  // Senha incorreta
                }
            }
        }
    }

    fclose(file);  // Fechar o arquivo

    return 0;  // Usuário não encontrado
}