#include<stdio.h>
#include<string.h>
struct TJugador{
char nombre[50],clave[50],correo[50];



};
int main(){

int opc, num_player,nivel;
struct TJugador jugadores;
    do {

        printf("Hola,¿Quieres jugar un juego?\n");
        printf("\n");
        printf("\n");
            printf("-Iniciar sesion\n");
            printf("-Registrarse\n");
            printf("-Salir del juego\n");
        printf("Escoje una de las opciones.Introduce el 1 para iniciar sesion,2 para registrarse o 3 para salir del juego\n");
        scanf("%d",&opc);

        switch (opc)
        {

        case 1 :
            fflush(stdin);
             printf("Introduzca el correo del jugador\n");
            gets(jugadores.correo);
             printf("Introduzca clave del jugador\n");
            gets(jugadores.clave);
            break ;

        case 2 :
                 fflush(stdin);
            printf("Introduzca nombre del jugador\n");
            gets(jugadores.nombre);
             printf("Introduzca el correo del jugador\n");
            gets(jugadores.correo);
             printf("Introduzca clave del jugador\n");
            gets(jugadores.clave);
        break ;

        }

    }    while(opc!=3||opc<1||opc>3);


return 0;
}
