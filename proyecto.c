#include<stdio.h>
#include<string.h>
#define TAM_player 6
struct TJugador{
char nombre[50],clave[50],correo[50];



};
int main(){

int opc, num_player,i;
char nivel;
struct TJugador jugadores [6];
    do {
        system("cls");
        printf("Hola,¿Quieres jugar un juego?\n");
        printf("\n");
        printf("\n");
            printf("1-Iniciar sesion\n");
            printf("2-Registrarse\n");
            printf("3-Salir del juego\n");
        printf("Escoje una de las opciones.\n");
        scanf("%d",&opc);

        switch (opc)
        {

        case 1 :
            fflush(stdin);
             printf("Introduzca el correo del jugador\n");
             fflush(stdin);
            gets(jugadores[i].correo);
             printf("Introduzca clave del jugador\n");
             fflush(stdin);
            gets(jugadores[i].clave);

            do
            {
            printf("Introduzca el numero de jugadores\n");
            fflush(stdin);
            scanf("%d",&num_player);
            }while(num_player>TAM_player);

            for(i=0;i<num_player;i++)
            {
                printf("Introduzca el nombre del jugador %d\n",i);
                fflush(stdin);
                gets(jugadores[i].nombre);
            }

            do
            {
            printf("F- Nivel Facil\n");
            printf("M- Nivel Medio\n");
            printf("D-Nivel Dificil\n");
            printf("E-Nivel Extremo\n");
            printf("Introduzca en que nivel quiere jugar\n");
            fflush(stdin);
            scanf("%c",&nivel);
            }while(nivel!='F' && nivel!='M' && nivel!='D' && nivel!='E');

            break ;

        case 2 :
                 fflush(stdin);
            printf("Introduzca nombre del jugador\n");
            fflush(stdin);
            gets(jugadores[i].nombre);
             printf("Introduzca el correo del jugador\n");
             fflush(stdin);
            gets(jugadores[i].correo);
             printf("Introduzca clave del jugador\n");
             fflush(stdin);
            gets(jugadores[i].clave);
        break ;
        }
         system("pause");

    }    while(opc!=3||opc<1||opc>3);




return 0;
}
