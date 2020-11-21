#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

long sacapalabras (char fichero[], char palabra[]);

int main()
{

    char fich[]={'l','i','b','r','o','.','t','x','t','\0'};
    char pal[30];

  
    sacapalabras(fich,pal);	
	printf ("\n la pabra al azar es: %s",pal);  
    
    getch();

}

//****************************************************

long sacapalabras (char fichero[], char palabra[])
{
	FILE *texto;	
	long num_pal=0;	
    int i;
    char ok='n';
	srand(time(NULL));

    texto=fopen (fichero, "r");	

	while ((fscanf(texto,"%s",palabra))!=EOF)
		num_pal++;

	rewind(texto);	
		
	while(ok!='s')
	{	for (i=0;i<rand()%num_pal;i++) 
			fscanf(texto,"%s",palabra);
		
		if(strlen(palabra)>=5)
			ok='s';				
	}

	fclose (texto);  

	return (num_pal);
}



