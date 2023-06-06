
		/*EXAMEN RECUPERACION PROGRAMACION 22/04/2015
				Eduardo Cuenca Mellado */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h> //para numeros aleatorios
	
int pares(int vector[],int n);
int	cambiar(int vector[],int n,int p);
int indicar(int vector[], int n);
	
	
	int main()
{
	int v[50],copia[50];
	int elem,i,f1,f3,longitud;
	char menu;
	
	printf ("Cuanto elementos tendra?: ");
	scanf ("%d",&elem);
	printf ("Escribe %d numeros: ",elem);
	for (i=0;i<elem;i++)
		scanf ("%d",&v[i],&copia[i]);
			
	while (menu!='D')
	{
		//system("cls");	
		printf ("\t MENU\n\n");
		printf ("\t A- Escribir\n"); 
		printf ("\t B- Cambiar\n"); 
		printf ("\t C- Indicar\n"); 
		printf ("\t D- Salir\n"); 
		printf ("\t E- Cambiar numeros\n"); 
		printf ("- - - - - - - - - - - - - - -");
		scanf ("%c",&menu);
		
		fflush(stdin);
		menu=toupper(menu);
		
		switch(menu)
		{
			case 'A':	
				f1=pares(v,elem);						
				printf ("Tienes %d numeros pares...",f1);
				getch();	
				break;
			
			case 'B':
				printf ("Posicion: ");
				scanf ("%d",&longitud);
				cambiar(v,elem,longitud);
				for (i=0;i<elem;i++)
					printf ("%d - ",v[i]);
				getch();
				break;
			
			case 'C':
				f3=indicar(v,elem);
					if (f3==1)
						printf ("Estan ordenados");
					else
						printf ("NO Estan ordenados");
						getch();
				break;
			
			case 'D':
				printf ("Adios...");
				break;
				
			case 'E':
				printf ("Cuanto elementos tendra?: ");
				scanf ("%d",&elem);
				printf ("Escribe %d numeros: ",elem);
				for (i=0;i<elem;i++)
					scanf ("%d",&v[i],&copia[i]);
				break;
		}
	}
}



	//FUNCIONES
	
	//1-PARES
	int pares(int vector[],int n)
{
	int par=0,i;

	for (i=0;i<n;i++)
		if (vector[i]%2==0)
			par++;
		return par;
}					

	//2-CAMBIAR
	int	cambiar(int vector[],int n,int p)
{
	int i;
	
		for (i=p;i<n;i++)
			vector[i]=rand()%100+150;
		
}

	
	//3-Indicar
	int indicar(int vector[],int n)
{
	int i;
		
	for (i=0;i<n;i++)
	{
		if (vector[i]<vector[i+1]);
		
		else 
			return 0;
		
	}
	return 1;
}
