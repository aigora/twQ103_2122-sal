#include<stdio.h>
#include<string.h>
#define TAM_player 4
struct TJugador{
	char nombre[50],clave[50],correo[50];
};
int pedirOpcion(){
	int operacion;
	system("cls");
    printf("Hola,?Quieres jugar un juego?\n\n\n");
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
		printf("Introduzca en que nivel quiere jugar:\n");
		printf("F- Nivel Facil\n");
    	printf("M- Nivel Medio\n");
    	printf("D-Nivel Dificil\n");
    	fflush(stdin);
    	scanf("%c",&lvl);
    } 
	while(lvl!='F' && lvl!='M' && lvl!='D');
    return lvl;
}

int main(){

	int opc, num_player,i,vidas,respuesta,grup_o_s;
	char nivel,respuesta_r,j_o_r,volver;
	struct TJugador jugadores [6];


    do {
		system("cls");
        opc=pedirOpcion();
        switch (opc) {
			case 1 :
           		fflush(stdin);
           		printf("Introduzca el correo del jugador\n");
           		fflush(stdin);
           		gets(jugadores[i].correo);
           		printf("Introduzca clave del jugador\n");
           		fflush(stdin);
           		gets(jugadores[i].clave);

				while(1) {
        			do {
            			printf("Escoja si desea jugar: J o ver el ranking: R\n");
            			fflush(stdin);
        				scanf("%c",&j_o_r);
           			} 
					while(j_o_r!='J' && j_o_r!='R');


					switch (j_o_r) {
    					case 'J':
							do {
        						printf("Escoja si quiere jugar en  solitario: 1 o en grupo: 2\n");
        						scanf("%d",&grup_o_s);
       						} 
							while(grup_o_s!=1 && grup_o_s!=2);
						
							if(grup_o_s==1) {
            					printf("Introduzca el nombre del jugador\n");
                				fflush(stdin);
                				gets(jugadores[i].nombre);
        					}
							else if (grup_o_s==2) {
								
            					printf("Introduzca el numero de jugadores en el grupo\n");
            					fflush(stdin);
            					scanf("%d",&num_player);
            					
							while(num_player>TAM_player);

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
                						printf(" Cuantas patas tiene un gato?\n");
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
                					case 'M':
                					break;
                					case  'D':
                					break;
            					}

                			printf("Si desea volver a jugar preione S, sino presione cualquier otra letra\n");
                			fflush(stdin);
                			scanf("%c",&respuesta_r);
            				}
							while(respuesta_r =='S');
            				break;
            
						case 'R':
            			break;
					}
    	
        		printf("Si deseas volver a la pagina anterior presione: V, para salir presoine cualqier otra letra\n");
        		fflush(stdin);
        		scanf("%c",&volver);

        		if(volver!= 'V') {
        			break;
        		}
				}
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

    }    
	while(opc!=3||opc<1||opc>3);




return 0;
}
