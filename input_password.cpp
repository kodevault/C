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
