#include <stdio.h>
#include <Windows.h> 

int main()
{
	int surface=0, mid=0, bottom=0;
	char container[10] = {"GreekMaze"};
	char folders[25][10] = {"alpha", "Beta", "Chi", "Delta", "Epsilon", "Eta", "Gamma", "Iota", "Ipsilon", "Ji", "Kappa", "Lambda", "Mu", "Nu", "Omega", "Omicron", "Phi", "Pi", "Psi", "Rho", "Sigma", "Tau", "Theta", "Xi", "Zeta"};
	char cmdbuff[BUFSIZ]; 
		
	snprintf(cmdbuff, sizeof(cmdbuff), "md %s\\%s\\%s\\%s \n", container,folders[surface], folders[mid], folders[bottom]);	
	system(cmdbuff);

	while(1)
	{	bottom++;	
		if (bottom==25)			
			{	bottom=0;
		 	 	mid++;
			}

		if (mid==25)
		{	mid=0;
		 	surface++;
		}
			 			
		if (surface==25)
		{	break;
		}
							
		snprintf(cmdbuff, sizeof(cmdbuff), "md %s\\%s\\%s\\%s \n", container,folders[surface], folders[mid], folders[bottom]);
		system(cmdbuff);
		system("cls");
		printf(" Construyendo laberinto, por favor espere...\n");
		printf(" %s\\%s\\%s\\%s \n", container,folders[surface], folders[mid], folders[bottom]); 					
		printf(" %i,%i%% Completado", surface*4, mid*4);
		Sleep(25);
	}
	
	return 0;	
}


