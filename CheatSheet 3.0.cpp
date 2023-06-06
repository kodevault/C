// Made in Mario Rueda

#define PATATA 12.34  // Establece una constante "patata" con un valor fijo

#include <math.h>	
#include <Windows.h> // Para Sleep(1000);

#include <ctype.h>  // fflush(stdin);  menu=toupper(menu);
#include <conio.h>	// getch();

#include <stdio.h>
#include <stdlib.h>	// system("cls") y system("pause");


int main() 
{
	
}
--- INSTRUCCIONES CON FLOW ----------------------------------------------------------------------------------------
	
	fflush(stdin);					// limpia el buffer del teclado, evita problemas al poner varios scanf seguidos	
	menu=toupper(menu); 			// Convierte en mayuscula la variable asignada, en este caso menu	
	menu=tolower(menu);				// Convierte en minuscula la variable asignada, en este caso menu
	system("pause"); 	// como el getch();
	char stop; do stop=getch(); while(stop!='\n');  // Para el programa hasta que se pulsa ENTER
	
	
--- VARIABLES --------------------------------------------------------------------------------------------------
	
	int entero; 	 	
	scanf("%d", &entero);
	float decimal;	 //   Pueden contener decimales
	scanf("%f", &decimal);
	char respuesta;	 //	  Para usar caracteres; para llamarlos: 'a' 'B' '5'
	scanf("%c", &respuesta);	
	long


--- VARIOS VALORES / UN SCANF ------------------------------------------------------------------------------
		
	printf("Introduzca la fecha actual en formato dd/mm/aaaa\n");
	scanf("%i/%i/%i",&dia, &mes, &ano);
	printf("%i/%i/%i",dia, mes, ano);


--- BUCLES Y OPERADORES -----------------------------------------------------------------------------------------------

	if / else if / else

	do{	}while(condicion);

	for(i=0; i>100; i++)
	{}		

	i=0;
	while(i<100)
	{i++;}

	switch()


--- CONDICIONES --------------------------------------------------------------------------------------------

	(A==B)			// A igual que B
	(A!=B)			// A diferente de B
	(A<=B)			// A menor o igual a B
	(A>=B)			// A mayor o igual a B
	(A%B==X)		// El resto de dividir A/B es X
	(A>B && C<B) 	// A mayor que B y C menor que B
	(A>B || C<B)	// A mayor que B o C menor que B


--- CSstrings --------------------------------------------------------------------------------------

#include <string.h>
	char nombrecadena[50];				// declaracion de la cadena
	gets(nombrecadena);					//el scanf(""); de las cadenas
	strcmp(cadena1,cadena2); // compara 2 cadenas y devuelve la diferencia
	strcpy(cadenas);	//copia
	printf("%d",strlen(nombrecadena));	// pinta la longitud de la cadena
	printf("%s",nombrecadena);			// pinta la cadena
	printf("%c",nombrecadena[3]); 		// pinta el 4º caracter de la cadena
	

--- FUNCIONES ---------------------------------------------------------------------------------------------------
// Las variables declaradas en la funcion no pueden coincidir con las del programa
// Las variables declaradas en el titulo de la funcion no hay que declararlas dentro

	int sumar (int n1, int n2); // declarar funcion
	 
	int main() // empezar programa
	{
		int a, b, total;
		
		printf("Introduzca 2 numeros\n");
		scanf("%d %d",&a, &b);
		
		total=sumar(a, b); //llamar funcion
	} // termina programa
	
int sumar (int n1, int n2) // explicar funcion
	{int suma;
 	suma=n1+n2;
	 return suma;}
		

--- VECTORES --------------------------------------------------------------------------------------------------
	//compilable
#include <stdio.h>
#include <conio.h>	
#include <stdlib.h>	

int main() 
{
	int i;
	int numeritos[10];
	system("cls");
	
	printf("dame die numeritos");

     for(i=0 ; i<10 ; i++)
		scanf("%d",&numeritos[i]);
		
	for(i=0 ; i<10 ; i++)
		printf("\n%d",numeritos[i]);
		
getch();

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
 	answer=toupper(answer);
	
	if (answer == 'Y')
	{printf("Como a todo el mundo.\n");
	getch();
	}
	else if (answer == 'N')
	{printf("Pues eres muy raro\n");
	getch();
	}
	else
	{printf("Respuesta Incorrecta.\n\n");
	fflush(stdin);
	goto question;
	}
} 

