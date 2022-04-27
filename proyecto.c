#include<stdio.h>
#include<string.h>
#define TAM_player 6
#define TAM_MAX 300
struct TUsuario{
char nombre[50];
char clave[50];
char correo[50];
};


int pedirOpcion(){
	int operacion;
	system("cls");
    printf("Hola,¿Quieres jugar un juego?\n\n\n");
    printf("1-Iniciar sesion\n");
    printf("2-Registrarse\n");
    printf("3-Salir del juego\n");
    printf("Escoje una de las opciones.\n");
    scanf("%d",&operacion);
    return operacion;
}

char introducirDificultad(){
	char lvl;
	printf("F- Nivel Facil\n");
    printf("M- Nivel Medio\n");
    printf("D-Nivel Dificil\n");
    printf("E-Nivel Extremo\n");
    printf("Introduzca en que nivel quiere jugar\n");
    fflush(stdin);
    scanf("%c",&lvl);
    return lvl;
}




int main(){

	int opc, num_player,i;
	char nivel, correo[50], clave[50];
	struct TUsuario usuarios[TAM_MAX];
	FILE * pfichero;


    do { 
		opc=pedirOpcion();
        switch (opc){
        	case 1 :
            	fflush(stdin); //SOBRAS PUTITA
            	printf("Para iniciar sesion:\n\n");
         	   printf("Introduzca el correo electronico\n");
        	    fflush(stdin);
            	gets(correo);
            	printf("Introduzca la clave\n");
            	fflush(stdin);
            	gets(clave);
        		pfichero = fopen("usuarios.txt", "r");
        	
        		if (pfichero == NULL) {
                	printf("Error en la apertura de fichero\n");
                	return 0;
        		}
        	
        		i=0;
        		while (fscanf(pfichero, "%s %s %s", usuarios[i].nombre, usuarios[i].correo, usuarios[i].clave) != EOF) {
                	printf("%s %s %s\n", usuarios[i].nombre, usuarios[i].correo, usuarios[i].clave);
                	i++;
         		}
        		fclose(pfichero);

        		for (i=0; i<TAM_MAX; i++) {
                	if (strcmp(correo, usuarios[i].correo) == 0)  {
                        printf("Usuario ya existente");
                	}	
				}

            	do{
            	printf("Introduzca el numero de jugadores\n");
            	fflush(stdin);
            	scanf("%d",&num_player);
            	}while(num_player>TAM_player);
            	
            	for(i=0;i<num_player;i++){
                	printf("Introduzca el nombre del jugador %d\n",i);
                	fflush(stdin);
                	gets(usuarios[i].nombre);
            	}
            	
            	do{
            		nivel=introducirDificultad();
            	}while(nivel!='F' && nivel!='M' && nivel!='D' && nivel!='E');
            	break ;

        	case 2 :
            	fflush(stdin);
            	printf("Introduzca nombre del jugador\n");
            	fflush(stdin);
            	gets(usuarios[i].nombre);
            	printf("Introduzca el correo del jugador\n");
            	fflush(stdin);
            	gets(usuarios[i].correo);
            	printf("Introduzca clave del jugador\n");
            	fflush(stdin);
            	gets(usuarios[i].clave);
        	break ;
        }
        system("pause");
        
    }while(opc!=3||opc<1||opc>3);
    
return 0;
}
