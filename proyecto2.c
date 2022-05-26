#include<stdio.h>
#include<string.h>
#define TAM_player 4
#define TAM_Registrado 100
struct TJugador{
char nombre[50],clave_guardado[50],correo_guardado[50];
int modo_de_juego,vidas;

};
void banner1(){
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%#**+++++*##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#+=:.............-=*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%#+:......       .......:=*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*-::.....          .......::-+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##-::......            ........:::*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+:-:......             .........:::-#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%#%=:-:.......              .........::::#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=:::........               .........::::#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=::::........               .........::::-#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+-::::........              ..........:::::=%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#-::::::.:.....              .......:::::::--+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=-::....:........            ............:.::=#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#=:...=...:-=-:...          ......-==-:..--:.:=+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%++-::-.....:::--:..        ....:--:::.....:-::+-%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%--:.::.      ...:::--......:-::::..      ..-..--##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%:....=*#%%%*+-.....:-=....--::....-+*#%%#*+. ...*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+...-##%#*++*#%%*-...::*..+::...:+####*+*#%%%=...:%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%=:-:+%%#=====+*%%%*....#::#-...=#%%#+=====+%%#:-::#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%+:.+%%+=+%%+==%%%*#*+#=::-#++#*#%%*==#%*==#%#.:-%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-..-%%*+=**==+%%#-:-=-=+=+:=-::#%%*+=+*+==#%*..:#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%-..-*#%*====+#%#*::::::..::::::=%%%*=====#%%=:.:*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-:.:-*%%####%%%#-::..::...-..:::+%%%%###%%#=-.:-*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#---=-::=*#%%%#*+-::...::...:....::=*#%%%#*+::-=---*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#+=--::==.....::::......:-...-......:::::....-=-:-===#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=...:=-.-=:.............:-. .=:.............-=::=-....%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%--==..=-.-=............::=   +:.......... .-=.:=:.-==-*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%#....=..=:.=:...........:--   +:......     .=-.=:.=:...=%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%.==.:- -- =-.  ........:=:   +:......     .=..=.:=.-=:+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=-..-- -- =-    ....**-:+.   +::=+:...    :=:.+..=..:=#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#---- :=:.=-    ..-#: ::*..  *-.. #=...   .=-.=- :---=%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*...:=-.-=.   ..++=#-.:*....+-.-*+-*-..   :=::=-...=%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#+=-:.--.:-:=+#+---=#.+  ..-:+#=--=**=:::.:=:.-==*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#*+*+=+***+-==+***#*-:  .-=%#**+==-=*#**=+*++#%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#*#*-:....=#====+*++++**====+*.....-+#*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*=:.... .#*+=============*#-....:.=+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+:...   +-+::-::-::::::=-+    ..:=###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-:..   +=-..   ..   ..::*    .:-*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%*::..  +=..   ::::.   .:#  ..::-%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-:::  =-.   .:::::    .#  ::::#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*:::..+=    .:::-..   .%..:::=%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+-:::+-     .:::.    .%.::--%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%#=::*-.    .:::.    .%:::##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#=+#--#:... ..:::......*=-+*=#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*==***%:....::::::....:***#==+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+#=+**#=---::-===-:----#+#+=*+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*%#*=*+*****#**+*#*#*##**=+#%##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+#%+=###*=#=+=+====#++#%#==%#*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*=%#====++#===+=+==**++===*%++%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#=%%%#***+%==-==*=+****##%%%+*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#=*%%%**#*=*#++*#**++#**#%%#=*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*==+*#+-:::-#=-*::::-+#*+==+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%*:::.:..+..+...:::-+%##%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-......+..=.....::##%###*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%:.... =..-......+##*#***#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%#%#...  -  :   ..-%%%##*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+..  :  .   .:%%#%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=.  :    ...#%%%%%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-..:  ....#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%-.......*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=....:#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
  printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*:.=#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
}
void banner2(){
printf(" ##                ##                ##               ###\n");
printf("##                                                    ##\n");
printf("#####   ######    ###     ##  ##    ###      ####      ##\n");
printf("##      ##  ##    ##     ##  ##     ##         ##     ##\n");
printf("##      ##        ##     ##  ##     ##      #####     ##\n");
printf("## ##   ##        ##      ####      ##     ##  ##     ##\n");
printf("###   ####      ####      ##      ####     #####    ####\n");
}
void banner3(){

    printf("                                                     ......                                                      \n");
    printf("                                     .::--===++++**+***++******++++===--::.                                      \n");
    printf("                             .:-==+***++==+++--++=--=+=--=+=--=++--+++==+++**+==-:.                              \n");
    printf("                        .:-=+++++++--=+=-:=++--+++==+++==+++=-+++--++=--=+=--+++=+*+=-:.                         \n");
    printf("                    .-=**+=+++::=++=-++++++**************************++++++-=++=:-+++=+*+=-.                     \n");
    printf("                   =+==++-:-+++++++********************--*********************++=+++-:-+++++=                    \n");
    printf("                  .*=:-+++++*************************+-::-**************************+++++-:-*.                   \n");
    printf("                   ++=++*************=**************+-::::-+**************+=************++=++                    \n");
    printf("                   -*+==+***********-::=********+=--::::::::--=+********+--:+***********==++:                 \n");
    printf("                    *=--+**********+::::----=**=::::::::::::::::=**==---::::-**********+::=+                     \n");
    printf("                    -+==+*********=-::::::::-***+::::::::::::::+***+:::::::::-+*******++==*-                     \n");
    printf("                    .*+==+******-:::::::::::+****+:::::::::::-+*****-::::::::::-=*****+==+*.                     \n");
    printf("                     ++::=******+-:::::::::-******=::::::::::=******+::::::::::-+*****=--+=                      \n");
    printf("                     :*==+********=:::::::::+*****=::::::::::=******=::::::::-+*******+=+*:                      \n");
    printf("                     :*==+********=:::::::::+*****=::::::::::=******=::::::::-+*******+=+*:                      \n");
    printf("                      +++=+********-::::::::-*****=::::::::::=******:::::::::+*******+=+++                       \n");
    printf("                      -*-:-********+::-=+++=+*****=-==+**+==-=******+++++=::-********-:-*-                       \n");
    printf("                      .*+=++********=+**+++****************************+=+*=+*******++=++.                       \n");
    printf("            :----------+**************++*+**************************+**+++*+************+----------:.            \n");
    printf("         :=+****+++***+++***+++***+++*++=+***+++***+++***++***+++***+++**+=++**+++***+++***+++***++**+-.         \n");
    printf("       .+++--=++-::-+=:::=*=:::++-::-++-::-*=:::=*-::-++-::-++:::=*=:::++-::-++-::-+=:::=+=:::++-::-++**:        \n");
    printf("      .+**-:::=+-::-+=:::-*-:::=+-::-++:::-+=:::=*-:::++-::-++:::-*-:::=+-::-++:::-+=:::=*-:::++-::-++++*-       \n");
    printf("      =*++=---+++==+**+==**++=+**+==+**+==+**+==*+++=+**+==++*+==***==++*+==+**+==+*++=+**+==++*+==+=::-+*.      \n");
    printf("     .*+=-=+**++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++**=:::=*=      \n");
    printf("     :*=:::=*=::....::::::::.:......::::::::::::...:::::::::..:::::.:::::::::....::.::::::::....:.:**===+*+      \n");
    printf("     :*+-:-+*-.....................................................................................**+==+*+      \n");
    printf("     :**+++**-.....................................................................................+*-::-++      \n");
    printf("     :*+-:-+*-.....................................................................................+*-::-*+      \n");
    printf("    :*=:::=*-.....................................................................................**++=+**      \n");
    printf("     :*+---+*-.....................................................................................+*+==+*+      \n");
    printf("     :**++++*-.....................................................................................++-::-++      \n");
    printf("     :*+-:-+*-............-==-:....-=...:=-.....-=:..:=======-..-=:.......-=:......-=:.............+*-::-*+      \n");
    printf("     :*=:::=*-.........:+#######-.+##+..###=...-###..+########=:###-.....=###.....=###.............+*++++*+      \n");
    printf("     :*+=-=+*-........-#########*.+##+..####+..-###..*########::####-...=####....:####=............**=--=*+      \n");
    printf("     :**++++*-........###*::.:==:.+##+..#####*:-###..*##+::::..:#####:.-#####....+#####:...........++-::-++      \n");
    printf("     :*=:::=*-.......-###:........+##+..#####*=.###..*#######..:######-######...-###+##*...........+*=-:=*+      \n");
    printf("     :*=:::=+-.......-###.........+##+..##*=*######..*#######..:#############...####+###=..........+*++++*+      \n");
    printf("     :*+===++-........###*:...=+=.+##+..##:::*#####..*##+::::..:###-####*-###..+#########:.........+*=::=*+      \n");
    printf("     :**=-=+*-........-##########:+##+..##::.:*####..*#######:::###:-##*:-###.:###****###+.........++::::++      \n");
    printf("     :*=:::=*-.........:+######+=.+##+..##::..:+###..+########=:###:.:-:.:###.=##*:::.-###.........*+=-:-++      \n");
    printf("     :*=:::=*-...........:-===:....==...:=:.....-=:..:=======-..-=-.......-=:..==:.....-=:.........+++++++=      \n");
    printf("     :*++=++*-...............:.....................................................................+*-::-++      \n");
    printf("     :*+=-=+*-.....................................................................................++-::-++      \n");
    printf("     :*=:::=*-.....................................................................................+*===+*+      \n");
    printf("     :*=-::+*-.....................................................................................**+==+*+      \n");
    printf("     :*++++**-.....................................................................................+*-::-++      \n");
    printf("     :*+---+*-.....................................................................................+*-::-*+      \n");
    printf("     :*=:::=*-.....................................................................................+*+==+*+      \n");
    printf("     :*+---+*+....................................................................................:*+=-=+*+      \n");
    printf("     :***++==***************************************************************************************-:::+*+      \n");
    printf("      ***+:::-++--=+*=--=++=--+*+---+++--=++=--=++=--+++--=++=--=++=--=*+---+++--=+*=--=++=--+++---+=::-+*-      \n");
    printf("      -**+-::=*-:::=+::::+=:::-+-:::=+-:::++:::-+=:::-*-:::=+-:::++:::-+=:::-+-:::=+-::-+=:::-+=:::-+++**+.      \n");
    printf("       =***+++*=---++=--=++=:-=++---+*=---++=::=++-:-+++-:-++=--=++=--=*+-:-+*+-:-++=::=*+-:-=*+---+****+.       \n");
    printf("        :+*********************************************************************************************=.        \n");
    printf("         :=+***************************************************************************************+-.          \n");
    printf("              ..................................................................................... \n");
}
void banner4(){
printf("                   ::::------------------------------------------------------------=========:              \n");
printf("                   #%%%%%%%%%%%%%###%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###%%%+              \n");
printf("                   #%%%%%%%%%%%%%%##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+              \n");
printf("                   ......:##-...........=#*...........-#*............*#=............##:......              \n");
printf("                         .##:           =#*           -#*            *#=           .##:                    \n");
printf("                         .##:           =#*           -#*            *#=           .##:                    \n");
printf("                         .##:           =#*           -#*            *#=           .##:                    \n");
printf("                         .##:           =#*           -#*            *#=           .##:                    \n");
printf("                         .##:           =#*           -#*            *#=           .##:                    \n");
printf("                         .##:           =#*           -#*=+.-.       *#=           .##:                    \n");
printf("                         .##:           =#*       +*+=*##*****=--.   *#=.          .##:                    \n");
printf("                         .##:           =#*      :+****##*********:  *#=.          .##:                    \n");
printf("                         .##:           =#*     -******##**********: *#=           .##:                    \n");
printf("                         .##:           =#*    -*******##*********-= *#=           .##:                    \n");
printf("                         .##:           =#*   .******-+##-==-==-+*:  *#=           .##:                    \n");
printf("                         .##:           =#*   -*****-:=##:::::-::=:  *#=           .##:                    \n");
printf("                         .##:           =#*   -****-::=##:::::-+:    *#=           .##:                    \n");
printf("                         .##:           -#*   -***-:::=##.::::.-:    *#=           .##:                    \n");
printf("                         .##:           -#*   -**-::::=##=:::--::    *#=           .##:                    \n");
printf("                         .##:           -#*  :=*-:::::=##:---::::    +#=           .##:                    \n");
printf("                         .##:           -#*  .--::::::=##*****=:.    +#=           .##:                    \n");
printf("                         .##:           -#*   .:::::::=##******-.    +#=           .##:                    \n");
printf("                         .##:           -#*    .::::::=##=====*=     +#=           .##:                    \n");
printf("                         .##:           -*=..   .:::::=##****+*-     =+-           .##:                    \n");
printf("                         .##:          .::::::   .:---=##+***++.   .:::::.         .##:                    \n");
printf("                         .##:          :::::::...:----=##---.     .:::::::.        .##:                    \n");
printf("                         .##:          :::::::..:::---=##---:.    .:::::::         .##:                    \n");
printf("                         .##:        -=.:::::.. .:::::=##:::.      ..::::.  -.     .##:                    \n");
printf("                         .##:        :*#+++.:.    .:::=##:.          ++-  .+#:     .##:                    \n");
printf("                         .##:      ::  :*##:.%#+=:.   -##      .:-=*+*#=.=#=. .    .##:                    \n");
printf("                         .##:      -#*: -##**.-=+#%#*++##=++**#%#*+-.+#*#+. .++    .##:                    \n");
printf("                          ##:       .-#*+#* :.    .:--+##===-::.     *#+. .=#+.     ##:                    \n");
printf("                          ##:    :.    -*##=+##*+==-::-##        ..:-*#=.=#*:  :    ##:                    \n");
printf("                          ##:    +#:    -##-. .--=+**############%%#**#*#+:  .+#    ##:                    \n");
printf("                          ##-     -#+:  -#*           :##:::::::..   +#+.  .=#=.    ##-                    \n");
printf("                          ##-  :=. .-**==#*=*=-:.     :##           .*#= .=#+. :=   ##-                    \n");
printf("                          ##-  .*#-   :=*##:-+*#%#**+=+##-----==++*#%##*+#+: .+#-   ##-                    \n");
printf("                   =======##+====*#*====*##++++++*##################*####++++##*++++##*+++++-              \n");
printf("                   #%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%=              \n");
printf("                   #######################################################******************=\n");
}
int pedirOpcion(){
	int operacion;
	system("cls");
    printf("Bienvenido a SAL, el juego del momento.\n\n\n");
    printf("1-Registrarse\n");
    printf("2-Iniciar sesion\n");
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

	int opc, num_player,i,vidas,respuesta,contador=0,terminadoF=0,terminadoM=0,terminadoD=0;
	char nivel,respuesta_r,volver,clave[50],correo[50];
	struct TJugador jugadores [TAM_Registrado];
	FILE*pfilexit;



    do {
    	system("cls");
        opc=pedirOpcion();

        switch (opc) {
        	case 2 :
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
        			fflush(stdin);
             			printf("Introduzca el correo del jugador\n");
             			fflush(stdin);
             			gets(correo);
             			printf("Introduzca clave del jugador\n");
             			fflush(stdin);
            			gets(clave);

        			for(i=0;i<=contador;i++) {

            			if(strcmp(correo,jugadores[i].correo_guardado)==0 && strcmp(clave,jugadores[i].clave_guardado)==0) {
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
                									banner2();
                									printf("\n");
                									printf("\n");
                                                    nivelFacil();
                								break;
                								case 'M':
                										banner4();
															NivelMedio();
												break;
												case 'D':
													banner3();

                                                    NivelDificil();
												break;

            								}
                							printf("Quieres volver a jugar?\n Si desea volver a jugar introduzca la letra 's'");
                							fflush(stdin);
                							scanf("%c",&respuesta_r);
            							}while(respuesta_r =='S'||respuesta_r =='s');
                                        break;
            			}
        			}
        			if(strcmp(correo,jugadores[i].correo_guardado)!=0 && strcmp(clave,jugadores[i].clave_guardado)!=0) {
                			printf("Correo o clave incorrectos. Si no tiene una cuenta, registrese en el menu de inicio\n");
            			}
            break ;

        	case 1 :

            	fflush(stdin);
            	printf("Introduzca el correo del jugador\n");
            	fflush(stdin);
            	gets(jugadores[i].correo_guardado);
            	printf("Introduzca clave del jugador\n");
            	fflush(stdin);
            	gets(jugadores[i].clave_guardado);
	            pfilexit =fopen("exitj.txt","a");
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

int nivelFacil () {

	int vidas=5;
	char tematica, respuestaChar;
	int respuestaInt;
    printf("Estas encerrado en un laberinto responde las siguientes preguntas de manera correcta para conseguir el camino correcto y lograr salir\n");
    printf("\n");
    printf("Para facilitarte un poco las cosas, te permitimos elegir una tematica\n");
    printf("\n");

    do{
		printf("Elija entre: Geografia (G), Deportes (D) o Historia (H):\n");
        fflush(stdin);
        scanf("%c",&tematica);
    } while(tematica!='G' && tematica!='D' && tematica!='H');
    switch (tematica) {
        case 'G':
            printf("Con que Geografia eh, a ver que tal se te da\n");
            printf("\n");
            do{
            	printf("El pais con mas habitantes de Asia es:\n");
                printf("\n");
                printf("a) China b) Tailandia c) Vietnam\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='a') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='a') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='a') && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("Cuantos continentes hay en el mundo:\n");
               	fflush(stdin);
                scanf("%d",&respuestaInt);
                if (respuestaInt!=6) {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaInt==6) {
                    printf("Correcto\n");
                }
            } while ((respuestaInt!=6) && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("La capital de Francia es:\n");
                printf("\n");
                printf("a) Lyon b) Paris c) Marsella\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
            	if (respuestaChar!='b') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='b') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='b') && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("Capital de Rumania:\n");
                printf("\n");
                printf("a) Bucarest b) Budapest c) Bolonia\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='a') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='a') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='a') && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
            	printf("La Sardana es un baile tipico de:\n");
                printf("\n");
            	printf("a) Galicia b) Navarra c) Catalunya\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='c') {
                	vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='c') {
                    printf("Correcto\n");
                	}
            } while ((respuestaChar!='c') && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("Cuantas islas tiene las Islas Canarias:\n");
                fflush(stdin);
                scanf("%d",&respuestaInt);
                if (respuestaInt!=8) {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                       printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaInt==8) {
                    printf("Correcto\n");
                }
            } while ((respuestaInt!=8) && (vidas>0));
        break;
        case 'D':
            printf("Eres todo un as de los Deportes eh, pero no sera tan facil\n");
            printf("\n");
            do{
                printf("Quien es el tenista espanol mas laureado:\n");
                printf("a) Nadal b) Ferrer c) Fornell\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='a') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='a') {
                    printf("Correcto\n");
                }
			} while ((respuestaChar!='a') && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("Cuando gano Espana su unico Mundial de futbol:\n");
                fflush(stdin);
                scanf("%d",&respuestaInt);
                if (respuestaInt!=2010) {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaInt==2010) {
                    printf("Correcto\n");
                }
            } while ((respuestaInt!=2010) && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("Futbolista con mas goles en la liga espanola:\n");
                printf("a) Benzema b) Cristiano c) Messi\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='c') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='c') {
                	printf("Correcto\n");
                }
            } while ((respuestaChar!='c') && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("Mitico dorsal del jugador Michael Jordan:\n");
                fflush(stdin);
                scanf("%d",&respuestaInt);
                if (respuestaInt!=23) {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaInt==23) {
                    printf("Correcto\n");
                }
            } while ((respuestaInt!=23) && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("Que entrenador argentino es conocido como 'El Cholo'?:\n");
                printf("a) Luis Enrique b) Ancelotti c) Diego Simeone\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='c') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='c') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='c') && (vidas>0));
            if (vidas==0){
                break;
            }
            printf("\n");
            do{
                printf("En que equipo de la NBA jugo Kobe Bryant desde 1996?:\n");
                printf("a) Lakers b) Miami Heat c) Suns\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='a') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='a') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='a') && (vidas>0));
        break;
        case 'H':
            printf("Mucha suerte, historiador, utiliza tus conocimientos para SALir\n");
            printf("\n");
            do{
                printf("Cuando se descubrio America:\n");
                fflush(stdin);
                scanf("%d",&respuestaInt);
                if (respuestaInt!=1492) {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaInt==1492) {
                    printf("Correcto\n");
               	}
            } while ((respuestaInt!=1492) && (vidas>0));
            if (vidas==0){
                break;
            }
            do{
                printf("Que nombre obtuvo la peninsula iberica tras la conquista musulmana:\n");
                printf("\n");
                printf("a) Hispania b) Espanya c) Al-Andalus\n");
               	fflush(stdin);
               	scanf("%c",&respuestaChar);
                if (respuestaChar!='c') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='c') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='c') && (vidas>0));
            if (vidas==0){
                break;
            }
            do{
            	printf("Nombre de los Reyes Catolicos:\n");
                printf("\n");
                printf("a) Marta y Ferran b) Isabel y Fernando c) Irene y Felipe\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='b') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='b') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='b') && (vidas>0));
            if (vidas==0){
                break;
            }
            do{
                printf("Cuando empezo la Segunda Guerra Mundial:\n");
                fflush(stdin);
                scanf("%d",&respuestaInt);
                if (respuestaInt!=1939) {
                    vidas--;
                    	printf("Lo sentimos su respuesta es incorrecta\n");
                        printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaInt==1939) {
                    printf("Correcto\n");
               	}
            } while ((respuestaInt!=1939) && (vidas>0));
            if (vidas==0){
                break;
            }
            do{
                printf("Cuando se produjo la Revolucion Francesa:\n");
                printf("\n");
                printf("a) 1879 b) 1786 c) 1789\n");
               	fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='c') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='c') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='c') && (vidas>0));
            if (vidas==0){
                break;
            }
            do{
                printf("Quien se encuentra en el billete de 1 dollar estadounidense:\n");
                printf("\n");
                printf("a) George Washington b) Donald Trump c) Mariano Rajoy\n");
                fflush(stdin);
                scanf("%c",&respuestaChar);
                if (respuestaChar!='a') {
                    vidas--;
                    printf("Lo sentimos su respuesta es incorrecta\n");
                    printf("Te quedan %d vidas\n",vidas);
                } else if (respuestaChar=='a') {
                    printf("Correcto\n");
                }
            } while ((respuestaChar!='a') && (vidas>0));
        break;
    }
    if (vidas==0){
        	printf("GAME OVER\n\n");
        }
        else {
            printf("Felicidades lograste salir\n");
        }
}
int NivelMedio(){
	srand(time(NULL));
	int vidas=3;
	int num;
	char palabra[100];
	system("cls");

	printf("Has entrado en una prision. Responde correctamente y saldras, falla y no podras escapar\n");

	//Nivel 1: sopa letras
	printf("Encuentra tres palabras relacionadas con una prision para continuar, y recuerda estas palabras para una futura prueba\n");
	char sopaLetras[6][6] ={{'l','a','d','l','e','c'},
							{'w','l','m','e','l','u'},
							{'u','s','a','l','i','r'},
							{'a','o','g','v','t','i'},
							{'p','i','y','u','e','b'},
							{'r','o','c','c','a','l'}};
	int i=0, j=0;
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			printf("%c ",sopaLetras[i][j]);
		}
		printf("\n");
	}

	int encontradoLlave=0, encontradoCelda=0, encontradoSalir=0;
	while(!(encontradoLlave==1	&&	encontradoCelda==1	&&	encontradoSalir==1	&&	vidas>0)){
		gets(palabra);
		if(strcmp(palabra,"llave")==0 || strcmp(palabra, "Llave")==0 || strcmp(palabra, "LLAVE")==0){
			encontradoLlave=1;
		}
		else if(strcmp(palabra,"celda")==0 || strcmp(palabra, "Celda")==0 || strcmp(palabra, "CELDA")==0){
			encontradoCelda=1;
		}
		else if(strcmp(palabra,"salir")==0 || strcmp(palabra, "Salir")==0 || strcmp(palabra, "SALIR")==0){
			encontradoSalir=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}





	//Nivel 2: Acertijo
	printf("Exacto te encuentras en una celda.Has superado la primera prueba, a continuacion resuleve el siguiente acertijo:\nNo muerdo ni ladro, pero tengo dientes y la casa guardo,Que soy?\n");
	int solucionadoAcertijo=0;
	while(!(solucionadoAcertijo==1	&&	vidas>0)){
		gets(palabra);
		if(strcmp(palabra, "llave")==0 || strcmp(palabra, "Llave")==0 || strcmp(palabra, "LLAVE")==0){
			solucionadoAcertijo=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}


	//Nivel 3: puertas
	printf("Perfecto, ahora tienes a tu disposicion tres llaves, y solo una de ellas abre la puerta de tu celda\nLa cerradura tiene una silueta formado por un cuadrado de 2cm de lado y un triangula de 3cm base y 2cm altura.\nLas tres llaves tienen la misma silueta pero distinto tama%co:\n1_10cm, 2_6cm, 3_7cm\n ",164);
	int puertaCorrecta=0;
	while(!(puertaCorrecta==1	&&	vidas>0)){
		scanf("%d",&num);
		if(num==3){
			puertaCorrecta=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}


	//Nivel 4: dados
	printf("Una vez fuera de la celda camino hacia la salida debes atravesar el patio, donde te topas con unos presos que te impiden el paso.\nPara reanudar tu camino debes ganarles a los dados el juego consisteno en no sacar el mismo numero (del 1 al 6)\n");
	int numeroDiferente=0;
	int numDados;
	while(!(numeroDiferente==1	&&	vidas>0)){
		numDados=rand()%(6-1+1) + 1;
		scanf("%d",&num);
		printf("Los presoso han sacado un %d\n",numDados);
		if (num==numDados) {
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		} else {
			numeroDiferente=1;
			printf("Enhorabuena puedes continuar tu camino\n");
		}
	}


	//Nivel 5: comida
	printf("Tanta tension te ha abierto el apetito, continuando hacia la salda entras en el comedor, donde te encuentras una pizza prosciutto, al comertela empiecas a sentir mal.\n¡Te has envenenado!\nEl antidoto se encuentra en el bote del ingrediente que no se usa en la receta\n");
	printf("Encuentra el ingrediente.\n1_Jamon 2_Oregano 3_champinion\n");
	int ingredienteCorrecto=0;
	while(!(ingredienteCorrecto==1	&&	vidas>0)){
		scanf("%d",&num);
		if(num==3){
			ingredienteCorrecto=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}


	//Nivel 6: fibonacci
	printf("Enhorabuena, sigues vivo, reanudas tu camino hacia la salida del centro penitenciario y te encuentras la ultima puerta que se abre con un codigo el cual es el noveno numero de la sucesion de Fibonacci\n");
	int numCorrecto=0;
	while(!(numCorrecto==1	&&	vidas>0)){
		scanf("%d",&num);
		if(num==21){
			numCorrecto=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}
	return 1;
}
int NivelDificil(){
	srand(time(NULL));
	int vidas=3;
	int num, x, y, numTelefono;
	char palabra[100],batman[100],maquinista[100],num1[100],matrix[100], letra1, tesis[100],blancanieves[100];

	printf("Has entrado en una sala de un cine abandonado y te has quedado encerrado, las llaves estan en un criptex. Responde correctamente y saldras, falla y no podras escapar\n\n");

	//Nivel 1: codigo cifrado
	printf("Para poder salir necesitas completar un crucigrama y buscar la palabra escondida en este para abrir el criptex\n");
	printf("Lo primero que observas es una peque%ca hoja tirada en el suelo con una palabra con un codigo cifrado\n\n",164);
	printf("Y la palabra es %c %c %c %c %c %c %c %c %c %c\n\n",204,192,208,212,200,205,200,210,211,192);
	printf("Responde a la siguiente pregunta para encontrar el decodificador\n");
	printf("Cual es el apellido del actor protagonista de tres entregas de Batman\n\n");
	int encontradoBatman=0;
	while(!(encontradoBatman==1 &&	vidas>0)){
		gets(batman);
		if(strcmp(batman,"Bale")==0 || strcmp(batman,"bale")==0 || strcmp(batman,"BALE")==0){
			encontradoBatman=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}
	printf("\n");
	printf("Has desbloqueado el descodificador:\n");
	int letra=97;
	for(letra; letra<=122; letra++){
		printf("%c  ",letra);
	}
	printf("\n");
	letra=192;
	for(letra; letra<=217; letra++){
		printf("%c  ",letra);
	}
	printf("\n");
	printf("Introduce la palabra cifrada\n");

	int encontradoMaquinista=0;
	while(!(encontradoMaquinista==1 &&	vidas>0)){
		gets(maquinista);
		if(strcmp(maquinista,"maquinista")==0 || strcmp(maquinista,"Maquinista")==0 || strcmp(maquinista,"MAQUINISTA")==0){
			encontradoMaquinista=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}

	//Nivel 2: acertijo
	printf("Perfecto ya tienes la primera palabra del cruzigrama, continuemos con la segunda.\nSe enciende la pantalla y aparecen cinco datos sobre una pelicula. Descubrela y completa tu cruzigrama\n\n");
	printf("1_Ha tenido un total de 9 entregas.\n2_La primera se estreno en 1979.\n3_El director de esta entrega fue Ridley Scott.\n_4_La ultima entrega fue en 2017.\n5_ Para la mayoria de escenas gore de la primera pelicula se utilizaron productos de casqueria dando una impresion mas realista pero incomoda para los actores.\n\n");
	printf("Introduce la pelicula\n");

	int encontradoAlien=0;
	while(!(encontradoAlien==1 &&	vidas>0)){
		gets(palabra);
		if(strcmp(palabra,"alien")==0 || strcmp(palabra,"Alien")==0 || strcmp(palabra,"ALIEN")==0){
			encontradoAlien=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}

//Nivel 3: número de teléfono
	printf("\n");
	printf("Perfecto, has conseguido la segunda palabra de tu cruzigrama\nPara la siguiente prueba encuentras un peque%co cuaderno con una secuencia numerica y una ecuacion, descubre estos tres valores\n",164);
	printf("Resuelve la siguiente ecuacion con dos incognitas\nx+y=2217\n5x-y/9+500=1787\n");
	int numeroX=0;
	while(!(numeroX==1	&& vidas>0)){
		printf("Introduce x:\n");
		scanf("%d",&x);
		if(x==300){
			numeroX=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}
	int numeroY=0;
	while(!(numeroY==1 && vidas>0)) {
		printf("Introduce y:\n");
		scanf("%d",&y);
		if(y==1917){
			numeroY=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}
	printf("Ahora continua la siguiente secuencia:\n0, 12, 24, 36, 48,...\n");
	int numeroCorrecto=0;
	while(!(numeroCorrecto==1	&&	vidas>0)){
		scanf("%d",&num);
		if(num==60){
			numeroCorrecto=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}

	printf("300, 1917 y 60 segundos, todos nombre de peliculas\nY juntos forman un numero de telefono\nOrdenalas cronologicamente para obtener este numero\n");
	int numeroEncuentro=0;
	while(!(numeroEncuentro==1 && vidas>0)) {
		scanf("%d",&numTelefono);
		if(numTelefono==603001917){
			numeroEncuentro=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}

	printf("Bien ahora solo falta buscar un movil para probar a llamar a este numero\nResponde esta pregunta correctamente para obtenerlo\n");
	printf("cual es la primera pelicula de disney\n");
	int encontradoDisney=0;

	while(!(encontradoDisney==1 &&	vidas>0)){
		gets(blancanieves);
		if(strcmp(blancanieves,"Blancanieves")==0 || strcmp(blancanieves,"blancanieves")==0 || strcmp(blancanieves,"BLANCANIEVES")==0){
			encontradoDisney=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}
	printf("Con el movil en tu disposicion llamas y obtienes la tercera palabra:\n\nInterstellar\n\n");



	//Nivel 4:Buscaminas/tocado y hundido
	printf("Te das cuenta que hay un total de 12 butacas de un color distinto y piensas que puede significar algo\nSelecciona las 6 correctas en las que esta escondida tu siguiente palabra\n");
	printf("1A  1B  1C\n2A  2B  2C\n3A  3B  3C\n4A  4B  4C\n");
	int numeroBarco1=0, numeroBarco2=0, numeroBarco3=0, numeroBarco4=0, numeroBarco5=0, numeroBarco6=0;
	int ordenAdivinado[6];
	int i=0;
	while(!(numeroBarco1==1 && numeroBarco2==1 && numeroBarco3==1 && numeroBarco4==1 && numeroBarco5==1 && numeroBarco6==1 && vidas>0)) {
		gets(num1);
		if(strcmp(num1,"1A")==0){
			numeroBarco1=1;
			ordenAdivinado[i]=116;
			printf("Acertaste\n");
			i++;
		}
		else if(strcmp(num1,"1B")==0){
			numeroBarco2=1;
			ordenAdivinado[i]=120;
			printf("Acertaste\n");
			i++;
		} else if(strcmp(num1,"2C")==0){
			numeroBarco3=1;
			ordenAdivinado[i]=109;
			printf("Acertaste\n");
			i++;
		} else if(strcmp(num1,"3A")==0){
			numeroBarco4=1;
			ordenAdivinado[i]=114;
			printf("Acertaste\n");
			i++;
		} else if(strcmp(num1,"3C")==0){
			numeroBarco5=1;
			ordenAdivinado[i]=97;
			printf("Acertaste\n");
			i++;
		} else if(strcmp(num1,"4C")==0){
			numeroBarco6=1;
			ordenAdivinado[i]=105;
			printf("Acertaste\n");
			i++;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}
	for(i=0;i<6;i++) {
		printf("%c",ordenAdivinado[i]);
	}
	printf("\n");
	printf("Ahora ordena estas letras para formar el nombre de una pelicula\n");
	int encontradoMatrix=0;
	while(!(encontradoMatrix==1 &&	vidas>0)){
		gets(matrix);
		if(strcmp(matrix,"matrix")==0 || strcmp(matrix,"Matrix")==0 || strcmp(matrix,"MATRIX")==0){
			encontradoMatrix=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}

	//Nivel 5:ahorcado

	printf("Ultima palabra\nPara esta encuentras escondida una tablet que tiene un juego abierto, el ahorcado\nEntruentra la palabra para poder salir\n");
	printf("Selecciona una letra\n");
	int encontradoA=0, encontradoC=0, encontradoS=0;
	int encontradoB=0, encontradoL=0, encontradoN=0;
	int encontradoCC=0;
	char c=NULL,a=NULL,s=NULL,b=NULL,l=NULL,n=NULL;
	while(!(encontradoA==1 && encontradoCC==1 && encontradoS==1 && encontradoB==1 && encontradoL==1 && encontradoN==1 &&vidas>0)){
		fflush(stdin);
		scanf("%c",&letra1);
		if(letra1=='A' || letra1=='a'){
			encontradoA=1;
			a=letra1;
		}
		else if(letra1=='C' || letra1=='c'){
			encontradoCC=1;
			fflush(stdin);
			c=letra1;
		}
		else if (letra1=='S' || letra1=='s'){
			encontradoS=1;
			fflush(stdin);
			s=letra1;
		}
		else if(letra1=='B' || letra1=='b'){
			encontradoB=1;
			fflush(stdin);
			b=letra1;
		}
		else if(letra1=='L' || letra1=='l'){
			encontradoL=1;
			fflush(stdin);
			l=letra1;
		}
		else if(letra1=='N' || letra1=='n'){
			encontradoN=1;
			fflush(stdin);
			n=letra1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
		fflush(stdin);
		printf(" %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n",124,c,124,a,124,s,124,a,124,b,124,l,124,a,124,n,124,c,124,a,124);
	}
	printf("\n");
	//Nivel 6: criptex
	printf("Ya estan todas.Busca la palabra escondida para poder abrir el criptex\n\n");
	printf("%cm%ca%cq%cu%ci%cn%ci%cs%ct%ca%c %c %c %c %c %c %c\n",124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124);
	printf("%c %c %c %c %c %ca%cl%ci%ce%cn%c %c %c %c %c %c %c\n",124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124);
	printf("%c %c %c %ci%cn%ct%ce%cr%cs%ct%ce%cl%cl%ca%cr%c %c\n",124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124);
	printf("%c %c %c %c %cm%ca%ct%cr%ci%cx%c %c %c %c %c %c %c\n",124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124);
	printf("%c %c %c %c %c %c %cc%ca%cs%ca%cb%cl%ca%cn%cc%ca%c\n\n",124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124);
	printf("Introduce la palabra escondida\n");
	int encontradoTesis=0;
	while(!(encontradoTesis==1 &&	vidas>0)){
		gets(tesis);
		if(strcmp(tesis,"tesis")==0 || strcmp(tesis,"Tesis")==0 || strcmp(tesis,"TESIS")==0){
			encontradoTesis=1;
		}
		else{
			printf("Lo sentimos su respuesta es incorrecta\n");
			vidas--;
			printf("Te quedan %d vidas\n",vidas);
			if(!vidas>0){
				printf("GAME OVER\nEmpieza otra vez\n");
				return 0;
			}
		}
	}
	printf("Ya esta abierto el criptex\n");
	return 1;
}
