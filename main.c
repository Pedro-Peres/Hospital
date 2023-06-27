#include <stdio.h>
#include <stdlib.h>
#include <dirent.h> // Biblioteca para manipula��o de diret�rios
#include "simbolos/hospital.h"
#include "simbolos/carregar.h"
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <locale.h>
#include "headers/ConsultasCod.h"
#include "headers/visitas.h"
#include "headers/Vacinas.h"
#include "headers/Clear.h"
#include "headers/Peso.h"
#include "headers/ambulancia.h"
#include "headers/Menu_Login.h"
#include "simbolos/logo.h"
#include "simbolos/nuke.h"
#include <unistd.h>

#define MAX_USERNAME_LENGTH 50 /// limite de letras
#define MAX_PASSWORD_LENGTH 50 /// limite de letras

void seta(){
    textcolor(3);
    printf(R"EOF(
  ___ ___ \
 |___|___> >
        /_/                 )EOF");
    textcolor(15);
}
void feito(){
textcolor(2); ///cor
printf("Dados carregados com sucesso"); ///frase
textcolor(15); ///cor

}

int main()
{

    setlocale(LC_ALL, "portuguese");
    HWND console = GetConsoleWindow(); ///meter em tela cheia
    ShowWindow(console, SW_MAXIMIZE); ///meter em tela cheia
    SMALL_RECT windowSize = {100, 100, 400, 100}; // Definir o tamanho da janela
    COORD bufferSize = {200, 300}; // Definir o tamanho do buffer de tela
    SetConsoleWindowInfo(console, TRUE, &windowSize);
    SetConsoleScreenBufferSize(console, bufferSize);
    int nomeUsuario,sexo,cons,consultas,escolha,menuescolha,vacines;
    char username[100], password[100];

 logo();
      printf("\n\n\n\n");
      entrada();
      clrscr1();

    textcolor(15);  ///cor
Sleep(500); /// Tempo para aparecer
    textcolor(2); ///cor
    printf(R"EOF(
 / | | |   ___ __ _(_)_ _
 | | | |__/ _ \ _` | | ' \
 |_| |____\___\__, |_|_||_|
              |___/)EOF"); ///op��o


    Sleep(500); /// Tempo para aparecer
    textcolor(6); ///cor
    printf(R"EOF(
 |_  ) | _ \___ __ _(_)___ |_ ___
  / /  |   / -_) _` | (_-<  _/ _ \
 /___| |_|_\___\__, |_/__/\__\___/
               |___/)EOF"); ///op��o



    Sleep(500); /// Tempo para aparecer
    textcolor(5); ///cor
    printf(R"EOF(
 |__ / / __|__ _(_)_ _
  |_ \ \__ \ _` | | '_|
 |___/ |___\__,_|_|_|
                 )EOF");///op��o
textcolor(15);
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");

seta();
    ///Escolha de op��o para pessoa escolher
    scanf("%i",&escolha); ///recolher a op��o que pretendeu
    clrscr1();

    switch(escolha) {

   case 1:

            loop:
                textcolor(5);
           printf(R"EOF(
 | | | |______ _ _ _ _  __ _ _ __  ___
 | |_| (_-< -_) '_| ' \/ _` | '  \/ -_)
  \___//__\___|_| |_||_\__,_|_|_|_\___|)EOF");
                scanf("%s", username);
                clrscr1();
                textcolor(3);
               printf(R"EOF(
 | _ \__ _ _______ __ _____ _ _ __| |
 |  _/ _` (_-<_-< V  V / _ \ '_/ _` |
 |_| \__,_/__/__/\_/\_/\___/_| \__,_|)EOF");
                scanf("%s", password);
                clrscr1();
                textcolor(15);

                int resultado = buscarUsuario(username, password);
                if (resultado == 1) {

                        textcolor(2);
                    printf(R"EOF(
 | |   ___ __ _(_)_ _    ___ / _|___| |_ _  _ __ _ __| |___   __ ___ _ __    ____  _ __ ___ _________
 | |__/ _ \ _` | | ' \  / -_)  _/ -_)  _| || / _` / _` / _ \ / _/ _ \ '  \  (_-< || / _/ -_)_-<_-< _ \
 |____\___\__, |_|_||_| \___|_| \___|\__|\_,_\__,_\__,_\___/ \__\___/_|_|_| /__/\_,_\__\___/__/__\___/
          |___/)EOF");
          printf("\n\n");
          carregar();
          clrscr1();
          textcolor(15);

                } else if (resultado == 2) {
                    printf("Senha incorreta.\n");
                    goto loop;
                } else {
                    printf("Nome de usu�rio n�o encontrado.\n");
                    goto loop;
                }




            textcolor(9);
            menu:
            printf(R"EOF(
 / |___ / __|___ _ _  ____  _| | |_ __ _ ___
 | |___| (__/ _ \ ' \(_-< || | |  _/ _` (_-<
 |_|    \___\___/_||_/__/\_,_|_|\__\__,_/__/)EOF");
 printf("\n");


 textcolor(6);
 printf(R"EOF(
  ___  __   ___    _ _                 ___              _
 |_  )__ \ / (_)____) |_ __ _   __ _  |   \ ___ ___ _ _| |_ ___ ___
  / /___\ V /| (_-< |  _/ _` | / _` | | |) / _ \ -_) ' \  _/ -_)_-<
 /___|   \_/ |_/__/_|\__\__,_| \__,_| |___/\___\___|_||_\__\___/__/)EOF");
 printf("\n");


 textcolor(4);
 printf(R"EOF(
 |__ /___ \ / /_ _ __(_)_ _  __ _ ___
  |_ \___\ V / _` / _| | ' \/ _` (_-<
 |___/    \_/\__,_\__|_|_||_\__,_/__/
              )EOF");
              printf("\n");


textcolor(5);
 printf(R"EOF(
 | | | ___| \| (_)_ _____| |  __| |___  |_ _|_ _  ____  _| (_)_ _  __ _
 |_  _|___| .` | \ V / -_) | / _` / -_)  | || ' \(_-< || | | | ' \/ _` |
   |_|    |_|\_|_|\_/\___|_| \__,_\___| |___|_||_/__/\_,_|_|_|_||_\__,_| )EOF");
   printf("\n");
    textcolor(8);
   printf(R"EOF(
 | __|___| _ \___ ______
 |__ \___|  _/ -_)_-< _ \
 |___/   |_| \___/__\___/ )EOF");
 printf("\n");


  textcolor(3);
 printf(R"EOF(
  / / ___|  \/  |__ _ _ _ __ __ _ _ _    /_\  _ __ | |__ _  _| |__ _ _ _  __(_)__ _
 / _ \___| |\/| / _` | '_/ _/ _` | '_|  / _ \| '  \| '_ \ || | / _` | ' \/ _| / _` |
 \___/   |_|  |_\__,_|_| \__\__,_|_|   /_/ \_\_|_|_|_.__/\_,_|_\__,_|_||_\__|_\__,_|)EOF");
  textcolor(15);
  printf("\n\n");
  seta();

    scanf("%i",&menuescolha);
    clrscr1();


       if (menuescolha == 1) {



           textcolor(3);
            printf(R"EOF(
 / |  ___  \ \ / /__ _ _   / __|___ _ _  ____  _| | |_ __ _
 | | |___|  \ V / -_) '_| | (__/ _ \ ' \(_-< || | |  _/ _` |
 |_|         \_/\___|_|    \___\___/_||_/__/\_,_|_|\__\__,_|)EOF");




        textcolor(5);
        printf("\n\n");
        printf(R"EOF(
 |_  )  ___  |  \/  |__ _ _ _ __ __ _ _ _   / __|___ _ _  ____  _| | |_ __ _
  / /  |___| | |\/| / _` | '_/ _/ _` | '_| | (__/ _ \ ' \(_-< || | |  _/ _` |
 /___|       |_|  |_\__,_|_| \__\__,_|_|    \___\___/_||_/__/\_,_|_|\__\__,_|)EOF");
 textcolor(15);
       printf("\n\n");
  seta();


 scanf("%i",&cons);

   if (cons==1){
        clrscr1();
        Vconsulta();
        Sleep(5000);
            clrscr1();
            goto menu;

 }
 else if (cons==2){
        clrscr1();
        Mconsulta();
        Sleep(5000);;
                clrscr1();
                goto menu;
                 }
            }///fim menu escolha 1

             else if (menuescolha==2){

               visita();

                clrscr1();
                goto menu;

                                      }




               else if (menuescolha==3){



                textcolor(9);
                 printf(R"EOF(
 / |_____ _____ _ _  __ ____ _ __(_)_ _  __ _ ___
 | |___\ V / -_) '_| \ V / _` / _| | ' \/ _` (_-<
 |_|    \_/\___|_|    \_/\__,_\__|_|_||_\__,_/__/)EOF");
 printf("\n\n");



                 textcolor(5);
                  printf(R"EOF(
 |_  )__|  \/  |__ _ _ _ __ __ _ _ _  __ ____ _ __(_)_ _  __ _ ___
  / /___| |\/| / _` | '_/ _/ _` | '_| \ V / _` / _| | ' \/ _` (_-<
 /___|  |_|  |_\__,_|_| \__\__,_|_|    \_/\__,_\__|_|_||_\__,_/__/)EOF");
                  printf("\n\n");
                  seta();


                scanf("%i", &vacines);


            if (vacines==1){
                    clrscr1();
                Vvacina();
             Sleep(5000);
                clrscr1();
                goto menu;

            }
             else if (vacines==2){
                clrscr1();
                Mvacina();
               Sleep(5000);
                clrscr1();
                goto menu;

            }
             }

             else if (menuescolha==4){

      float nivelInsulina;
       float mediaInsulina = 10.0; // Media de insulina no organismo



    // pergunta o nivel de insulina no organismo
      printf(R"EOF(
 | \| (_)_ _____| |  __| |___  |_ _|_ _  ____  _| (_)_ _  __ _
 | .` | \ V / -_) | / _` / -_)  | || ' \(_-< || | | | ' \/ _` |
 |_|\_|_|\_/\___|_| \__,_\___| |___|_||_/__/\_,_|_|_|_||_\__,_|)EOF");
                    scanf("%f", &nivelInsulina);
                       seta();
                      clrscr1();



      // Verifica se o nivel de insulina esta acima da media
      if (nivelInsulina > mediaInsulina) {
        printf("Seu Nivel de insulina esta acima da Media.\n");
    } else {
        printf("Seu Nivel de insulina esta dentro ou abaixo da Media.\n");
    }

                    Sleep(5000);
                clrscr1();
                goto menu;

                                                }



             else if (menuescolha==5){



                 textcolor(9);
                 printf(R"EOF(
 / |___  |  \/  |_  _| | |_  ___ _ _
 | |___| | |\/| | || | | ' \/ -_) '_|
 |_|     |_|  |_|\_,_|_|_||_\___|_|)EOF");
                 printf("\n\n");


                 textcolor(5);
                  printf(R"EOF(
 |_  )__  | || |___ _ __  ___ _ __
  / /___| | __ / _ \ '  \/ -_) '  \
 /___|    |_||_\___/_|_|_\___|_|_|_|)EOF");
                 printf("\n\n");
                seta();


        scanf("%i",&sexo);

        if (sexo == 1){PesoMulher();
                 Sleep(5000);
                clrscr1();
                goto menu;}

        else if (sexo == 2){PesoHomem();
                 Sleep(5000);
                clrscr1();
                goto menu;}

                            }///fim menu escolha 5

       else if (menuescolha==6){

            marcarAmbulancia();
               Sleep(5000);
                clrscr1();
                goto menu;
                               }

 break;


    case 2:
         registrarUsuario();
         clrscr1();
        goto loop;

      break;


      case 3:
        nuke();
      carregar();
    PostMessage(console, WM_CLOSE, 0, 0);
      break;}

    return 0;
    }
