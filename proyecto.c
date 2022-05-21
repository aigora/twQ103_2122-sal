#include<stdio.h>
#include<string.h>
#define TAM_player 4
struct TJugador{
char nombre[50],clave[50],correo[50],clave_guardado[50],correo_guardado[50];
int modo_de_juego;


};
int pedirOpcion(){
	int operacion;
	system("cls");
    printf("Bienvenido a SAL, el juego del momento.\n\n\n");
    printf("1-Iniciar sesion\n");
    printf("2-Registrarse\n");
    printf("3-Salir del juego\n");
    printf("Escoje una de las opciones.\n");
    scanf("%d",&operacion);
    return operacion;
}
char introducirDificultad(){
    char lvl;
	do {
		printf("F- Nivel Facil\n");
    	printf("M- Nivel Medio\n");
    	printf("D-Nivel Dificil\n");
    	printf("Introduzca en que nivel quiere jugar\n");
    	fflush(stdin);
    	scanf("%c",&lvl);
    } while(lvl!='F' && lvl!='M' && lvl!='D');
    return lvl;
}
int main(){

	int opc, num_player,i,vidas,respuesta,contador;
	char nivel,respuesta_r,j_o_r,volver;
	struct TJugador jugadores [TAM_player];
	FILE*pfile;
	FILE*pfilexit;



    do {
    	system("cls");
        opc=pedirOpcion();

        switch (opc) {
        	case 1 :
        		pfilexit =fopen("exitj.txt","r");//fichero lectura para iniciar sesion
        		if(pfilexit==NULL) {
        			printf("Error. No existe el fichero\n");
        			return 0;
        		}
            	i=0;
        		while(fscanf(pfilexit, "%s %s",jugadores[i].correo_guardado , jugadores[i].clave_guardado)!= EOF) {
        			i++;
        			contador++;
        		}
        		fclose(pfilexit);
        			for(i=0;i<=contador;i++) {
            			fflush(stdin);
             			printf("Introduzca el correo del jugador\n");
             			fflush(stdin);
             			gets(jugadores[i].correo);
             			printf("Introduzca clave del jugador\n");
             			fflush(stdin);
            			gets(jugadores[i].clave);

            			if(strcmp(jugadores[i].correo,jugadores[i].correo_guardado)==0 && strcmp(jugadores[i].clave,jugadores[i].clave_guardado)==0) {
    						while(1) {
            					do {
            						printf("Escoja si desea jugar (J) o ver el ranking (R)\n");
               						fflush(stdin);
            						scanf("%c",&j_o_r);
            					} while(j_o_r!='J' && j_o_r!='R');

    							switch (j_o_r) {
    								case 'J':
      									do {
        									printf("Quiere jugar en  solitario(1) o en grupo(2)\n");
        									scanf("%d",&jugadores[i].modo_de_juego);
       									} while(jugadores[i].modo_de_juego!=1 && jugadores[i].modo_de_juego!=2);
        								if(jugadores[i].modo_de_juego==1) {
             								printf("Introduzca el nombre del jugador\n");
                							fflush(stdin);
                							gets(jugadores[i].nombre);
        								} else if(jugadores[i].modo_de_juego==2) {
											{
            									printf("Introduzca el numero de jugadores en el grupo\n");
            									fflush(stdin);
            									scanf("%d",&num_player);
            								} while(num_player>TAM_player);
            								for(i=0;i<num_player;i++) {
                								printf("Introduzca el nombre del grupo\n");
                								fflush(stdin);
                								gets(jugadores[i].nombre);
            								}
        								}
            							do{
            								nivel=introducirDificultad();
            								switch(nivel) {
                								case 'F':
                    								vidas=3;
                									printf("Responda las siguientes preguntas de manera correcta si desea salir, respondalas incorrectamente y fallecera en el camino\n");
                									printf("\n");
                									printf(" Cuantas patas tieneun gato?\n");
                									fflush(stdin);
                									scanf("%d",&respuesta);
                									if (respuesta==4) {
                    									printf("Felicidades usted ha respondido correctamente\n");
                									}
                									else if (respuesta!=4) {
                    									vidas--;
                    									printf("Lo sentimos su respuesta es incorrecta\n");
                    									printf("Ahora le quedan %d vidas\n",vidas);
                									}
                								break;
            								}
                							printf("Quieres volver a jugar?\n");
                							fflush(stdin);
                							scanf("%c",&respuesta_r);
            							}while(respuesta_r =='S');
                        			break;
                					case 'R':
                   					break;
    							}
        						printf("Quieres volver a la pagina anterior\n");
        						fflush(stdin);
        						scanf("%c",&volver);
        						if(volver!= 'v') {
            						break;
        						}
    						}
            			} else {
                			printf("Correo o clave incorrectos. Si no tiene una cuenta, registrese en el menu de inicio\n");
                		break;
            			}
        			}
            break ;

        	case 2 :

            	fflush(stdin);
            	printf("Introduzca el correo del jugador\n");
            	fflush(stdin);
            	gets(jugadores[i].correo_guardado);
            	printf("Introduzca clave del jugador\n");
            	fflush(stdin);
            	gets(jugadores[i].clave_guardado);
	            pfilexit =fopen("exitj.txt","w");
    	        if(pfilexit==NULL) {
            		printf("No se ha podido abrir el fichero para escribir\n");
            		return 0;
            	}
	            fprintf(pfilexit,"%s %s \n",jugadores[i].correo_guardado,jugadores[i].clave_guardado);
    	        fclose(pfilexit);
        	break ;
        }
        system("pause");

    } while(opc!=3||opc<1||opc>3);




return 0;
}
