// Guia basica de C 
// Por Mario Rueda

#include <stdio.h>		// El include clasico
#include <conio.h>		// Para el getch(); clrscr(); y 
#include <stdlib.h>		// Para el system("cls"); alternativa a clrscr();
#include <math.h>		// Funciones matematicas
#include <ctype.h>  	// Para el fflush(stdin); toupper(); isalpha(); isdigit();
#include <Windows.h>	// Para Sleep(1000);
#include <string.h>		// para strcmp(string1,string2);

#define PATATA 12.34  // Establece una constante "patata" con un valor fijo y no se como usarlo

--- FUNCIONES PROPIAS ----------------------------------------------------------------------------------------
//se declaran despues de los #include y antes del int main() y se llaman dentro del programa cuando hagan falta.

int mifuncion(char ejemplo[], int contador)	// declaramos el nombre, el tipo de return y los parametros que les vamos a pasar
{
    int i;	// las variables que se declaren dentro de las funciones no existen fuera de ellas y viceversa
	for(i=0;i<10;++i)
    {
        printf("Dame una %c", ejemplo[i]);
        contador=contador+i;
    }
    return contador;	// las funciones pueden devolver un valor, que puede ser char, int...
}

--- INICIO DEL PROGRAMA ----------------------------------------------------------------------------------------

int main() // La cabezera de todo programa
{
	
	
--- VARIABLES Y TIPOS --------------------------------------------------------------------------------------------------
	
	int entero, numero, menu;   	 		 //	  Numeros enteros, positivos o negativos, SIN decimales
	scanf("%d", &entero);					
	float decimal, variable5, variable6;	 //   Numeros que pueden tener decimales, positivos o negativos
	scanf("%f", &decimal);
	char caracter, letra, a, b;				 //	  Una letra o simbolo, la que sea, pero solo una
	scanf("%c", &letra);				
	char array[10];				 			// Un array de chars donde 10 es el tamaño del buffer, la primera posicion es 0
	scanf("%s", &respuesta);
	char pueblo[9] = {'c', 'o', 'l', 'm', 'e', 'n', 'a', 'r'}; // un array predefinido
	char container[10] = {"container"};
	char ch_arr[7][10] = {"spike", "tom", "jerry", "caca", "culo", "pedo", "pis"};
	printf("string = %s ", container);
	
	char* bolton="Se lo comió Bolton";		// un string en un vector
	FILE *original, *temp;					// un vector sirve tambien para abrir fichero txt y almacenar su contenido
	original=fopen("target.txt", "r");		// en este caso, abrimos el fichero en modo lectura, escritura es "w"
	
	printf("Al invocar %d variables, no se usa el '&' " ,entero);  // cuando se muestra un valor no se pone & para nada
	// OJO! a la hora de invocar una variable hay que usar siempre su tipo (%d, %f, %c, %s) de lo contrario pinta basura o se crashea
	
	
---	INTERACCION CON USUARIO y EFECTOS VISUALES --------------------------------------------------------------------------------------------------

	printf("aqui va el texto que deseas mostrar al usuario");
	fflush(stdin);					// limpia el buffer del teclado, evita problemas al poner varios scanf seguidos	
	scanf("%X", &nombrevariable); 	// captura un valor de tipo %"X" y lo almacena en &"nombrevariable"
	scanf("%i/%i/%i",&dia, &mes, &ano);		// permite escanear varios valores en un solo scanf();
	printf("%i/%i/%i",dia, mes, ano);		// permite pintar varios valores en un solo print();
	gets();					// como el scanf pero para una cadena de texto, el scanf(); deja de capturar cuando hay un espacio.
	getch(); 				// Detiene el programa hasta que se pulse una tecla cualquiera	
	system("cls");  		// Borra la pantalla,

--- FUNCIONES INTERNAS ----------------------------------------------------------------------------------------
	
	mayusculado=toupper(buffer); 		// Convierte en mayuscula la variable asignada, en este caso buffer y se la asigna a mayusculado
	minusculado=tolower(buffer);		// lo mismo pero a minuscula
	letras=isalpha(buffer);				// devuelve 0, 1, o 2 segun si el contenido de la variable son mayusculas, minusculas o cualquier cosa que no sean letras A-Z
	numeros=isdigit(buffer);			// devuelve 0 o 1 segun si el contenido de la variable son numeros o cualquier otra cosa
	isalnum();							// es el combo de isalpha e isdigit	
	Sleep(1000); 						// crea un retardo de 1000ms (1 segundo)
	
	// Esto es un comodin y hay que evitarlo en la medida de lo posible, hace los programas mas lentos y dificiles de comprender
	goto nombre;			// Nos manda a una zona concreta del programa, podemos darle el nombre que queramos
	nombre:					// Es la etiqueta de la llamada, se coloca en la zona a la que queremos ir
		

--- CAPTURAR VARIOS VALORES EN UN SOLO SCANF ------------------------------------------------------------------------------
	// Compilable	
#include <stdio.h>

int main()
{
	int dia,mes,ano;
		
	printf("Introduzca la fecha actual en formato dd/mm/aaaa\n");
	
}


--- SENTENCIAS -----------------------------------------------------------------------------------------------

if(X) {}		// Si(X) haz esto...
if(ch==13) break;  // one line IF
else if(Y) {}	// Sino entra en el if anterior y cumple(Y) hax esto...
else() {}		// Sino entro en ninguno anterior haz esto...
for() {}		// Durante
do{}			// Hazlo.
while()			// Mientras 


--- CONDICIONANTES --------------------------------------------------------------------------------------------

if (A==B)	// A igual que B
if (A!=B)	// A diferente de B
if (A<=B)	// A menor o igual a B
if (A>=B)	// A mayor o igual a B
if(ch==13) 	// ch igual a "Enter", \n, salto de linea...
if (A%B==X)	// El resto de dividir A/B es X
if (A>B && C<B) // A mayor que B y C menor que B
if (A>B || C<B)	// A mayor que B o C menor que B



+++  SECCION COPYPASTE Y CODIGO COMPILABLE  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


--- INPUT PASSWORD -----------------------------------------------------------------------------------------------
//compilable
#include <stdio.h>	
#include <conio.h>
#include <string.h>

int main()
{

char ch, password[8], hash[9] = {'c', 'o', 'l', 'm', 'e', 'n', 'a', 'r'};
int passcheck, e=0; 

printf("Cuidado! Solo tienes un intento: \n");
		while (e<=20)	// este WHILE es para los asteriscos del pass
		{
		    password[e]=getch();
		    ch=password[e];
		    if(ch==13) break;
		    else printf("*");
		    e++;
		}password[e]='\0';	// como hemos capturado el string por un metodo 'alternativo' hay que declarar manualmente el final del string
	  	
   		passcheck=strcmp(password,hash);	// compara la pass con la hardcodeada, devuelve 0 si ambos string son iguales
}


--- MENU USANDO SWITCH ---------------------------------------------------------------------------------------
	// Compilable
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char menu; 			//crea una variable de tipo caracter a la que se asigna el nombre "menu"
	
	printf("Este es tu menu:\n\n");  
	printf("1/A Opcion 1\n");
	printf("2/B Opcion 2\n");
	printf("3/D Opcion 3\n\n");
	printf("Escoja una opcion");	

	scanf("%c", &menu);		//almacena un caracter en la variable menu
	menu=toupper(menu);  	//convierte en mayuscula el caracter almacenado en la variable "menu"
	
	switch (menu)			// crea un bucle, segun el caracter almacenado entrara por un case u otro
	{
	case 'A':				// El case 'X' determina que caracter necesitas para entrar a cada opcion, se pueden crear varios
	case '1': 			  // case 'X' para entrar con diferentes respuestas a una misma opcion, se pueden usar numeros o letras
		printf("has elegido Opcion 1\n"); 
		break;			// IMPRESCINDIBLE, hasta que no llega al break no sale del case en el que haya entrado
		
	case 'B':
	case '2':
		printf("has elegido Opcion 2\n");
		break;
		
	case 'C':
	case '3':
		printf("has elegido Opcion 3\n");
		break;
		
	default:	// Entrara por esta opcion si el caracter introducido no es ninguno de los anteriores
		printf("tas ekivocao chato\n");
	}	
		getch();   
}
		
		
--- MENU USANDO if ---------------------------------------------------------------------------------------------
	// Compilable
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{	
   	 char menu;
	
	 printf ("Estas son las Opciones:\n\n");
	 printf ("A. Opcion 1\n");
	 printf ("B. Opcion 2\n");
	 printf ("C. Opcion 3\n");
	 printf ("D. Opcion 4\n\n");
	 
	 printf ("Elija una opcion del menu\n");
	 scanf ("%c", &menu);  //Aqui pide al usuario por que opcion quiere entrar

	 menu=toupper(menu);  

	 if (menu=='A')  		// si pulsa A entrara por aqui y realizara la tarea que tenga especificada
		printf ("Opcion 1\n");
	 
	 else if (menu=='B')    
		printf ("Opcion 2\n");
		
	 else if (menu=='C')
		printf ("Opcion 3\n");
		    
	 else if (menu=='D')	
		printf ("Opcion 4\n");
			
     else					// si pulsa una tecla no especificada en la resolucion del menu entrara aqui
	    printf ("Esa no es una opcion valida del menu");
}


--- Y/N QUESTIONS ----------------------------------------------------------------------------------------------
	// Compilable
#include <stdio.h>
#include <conio.h>

int main()
{	
	char answer;
	
	printf ("Responda usando Y/N\n");
	getch();
	
	question:
		
	printf ("Te gusta la leche?\n");
	scanf ("%c", &answer);
// 	answer=toupper(answer);
	
	if (answer == 'y' || answer == 'Y') //Si se usa answer=toupper(answer); simplifica esta pregunta.
	{printf("Como a todo el mundo.\n");
	getch();
	}
	else if (answer == 'n' || answer == 'N')
	{printf("Pues eres muy raro\n");
	getch();
	}
	else
	{printf("Respuesta Incorrecta.\n\n");
	fflush(stdin);
	goto question;
	}
} 

--- BUCLE while() ---------------------------------------------------------------------------------------------
	// Compilable
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int a, b, n, i, r;
	r=0;
	
	system("cls");
	
	printf("  Introduzca un numero (A):  ");
	scanf("  %d",&a);
	printf("  Introduzca un numero (B):  ");
	scanf("  %d",&b);
	
		if (a>=b)	{n=a; i=b;}
		else 		{n=b; i=a;}
	
	while (i!=0)
		{i--;
		 r=r+n;}
	
	printf("  Resultado de A x B:  %d", r);
	
	getch();
}


--- BUCLE 'INFINITO' con while(1) ---------------------------------------------------------------------------------------------

while(1)	// establece el bucle como true, sin un condicionante de final, basicamente es un bucle infinito
	{	
		printf("Cojo un muelle, lo tiro por el retrete, y ya son %i muelles los que el retrete se ha tragado", &i);
		Sleep(500);
		i++;
		if(loquesea==algo)
		{				
			break;	// rompe el bucle y continua con el programa
		}
	}


--- RELOJ -----------------------------------------------------------------------------------------------------
	// Compilable
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> 
#include <conio.h>

int main()
{
	int horas, minutos, segundos;
		
	system("cls");
		
	printf("  Introduzca la hora actual en formato 24h (HH:MM:SS)]\n  ");
	scanf("%d:%d:%d", &horas, &minutos, &segundos);
	
	do
	{
		segundos++;
	
		if (segundos==60)			
			{segundos=0;
		 	 minutos++;}

				if (minutos==60)
					{minutos=0;
			 		 horas++;}
			 			
						 if (horas==24)
							{horas=0;}
									 
		system("cls");
		printf("\n  %02d:%02d:%02d", horas, minutos, segundos);
		Sleep(1000); // crea un retardo de 1000ms (1 segundo)

	}while (!kbhit()); // se mantiene haciendo el bucle hasta que se pulse cualquier tecla
}

return 0;	// buena praxis de programacion
}
