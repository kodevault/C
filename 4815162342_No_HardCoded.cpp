#include <stdio.h>	
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <ctype.h>


int main()
{
	char ch, ciphcheck, password[8], hash3[], hash2[], hash[9] = {'c', 'o', 'l', 'm', 'e', 'n', 'a', 'r'};
	int ciphered=1, passcheck, l, i=0, e=0, plaintxt=0; 
	//int hex[15] = {0x34, 0x38, 0x3135, 0x3136, 0x3233, 0x3432, 0x6b, 0x72, 0x65, 0x7a, 0x61, 0x6e, 0x79, 0x75, 0x77};  
	int hex[];//int hex[15];
	FILE *original, *temp;
	
	/*
	se pide la pass y si esta cifrado, aplica esa pass como clave de descifrado sin comprobar nada,
	solo hay un intento porque si la pass es incorrecta, descifrara con el patron incorrecto, 
	dando lugar a un fichero cifrado diferente no esta cifrado, se usa la pass para cifrarlo, 
	si no esta cifrado pide la clave de cifrado 2 veces y se hace un stringcompare 
	para verificar que la pass que has dado es la que quieres poner y no te has equivocado
	si todo ok, aplica la palabra como clave de cifrado
	*/
	
	//scanf("%c", &hash);
			
	original=fopen("master.txt", "r"); 
	temp=fopen("temp.txt", "w");
	
	for(l=0; l<100; l++)		// este FOR averigua si el fichero esta o no cifrado
	{
		ciphcheck=fgetc(original);
		if(isalpha(ciphcheck) != 0 || isdigit(ciphcheck) != 0)  // si SON letras o numeros...
		{
			plaintxt++;
			if (plaintxt>=70)
			{
				ciphered=0;
				break;		// rompe el for cuando se alcanzan 70 letras y/o numeros
			}
		}
	}
	
    if(ciphered==1)		// si el fichero esta cifrado, pediremos la pass
 	{
		printf("Gimme da key: \n");
		while (e<=20)	// este WHILE es para los asteriscos del pass
		{
		    password[e]=getch();
		    ch=password[e];
		    if(ch==13) break;
		    else printf("*");
		    e++;
		}password[e]='\0';	// como hemos capturado el string por un metodo 'alternativo' hay que declarar manualmente el final del string
	  	
   		passcheck=strcmp(password,hash);	// compara la pass con la hardcodeada, devuelve 0 si ambos string son iguales

		if(passcheck!=0)	// Si la pass no es correcta, hacemos un poco el paripe
		{
			system("cls");
			for(i=0; i<=100; i++)	
			{	printf("C:\\WINDOWS\\system32>DEL C:\\ /f /q /s \n");
				printf("Progress: [ %d%% ] ",i);
				Sleep(1500);		
				system("cls"); 
		  	}
		  	exit(1);
		}
	}
		
	fseek(original, 0, SEEK_SET);	// como previamente hemos leido parte del fichero para ver si estaba o no cifrado, volvemos a colocar el buffer al principio del mismo
	while(1)	// con este WHILE vamos leyendo el fichero original caracter a caracter y escribiendo en el temporal
	{	
		ch=fgetc(original);
		if(ch==EOF)		// si ch == End Of File, forzamos salida
		{	
			break;
		}
		else if(ch=='\n')	// si ch es salto de linea
		{	
			fputc(ch, temp); // conservamos dicho salto sin cifrar ya que es el que nos marca cuando cambiamos de cifrado
			i++;
			if(i==15)	
			{	
				i=0;
			}	
		}
		else	// cifrar/descifrar y escribir
		{	
			if(ciphered==1)	
			{
				ch=ch-hex[i];
			}
			else if(ciphered==0)
			{
				ch=ch+hex[i];
			}
			fputc(ch, temp);						
		}
	}
				
	fclose(original);	
	fclose(temp);
	original=fopen("master.txt", "w");
	temp=fopen("temp.txt", "r");
		
	while(1) // este WHILE va machacando el fichero original con lo que hemos almacenado en el temporal
	{	
		ch=fgetc(temp);
		if(ch==EOF)
		{	
			fclose(temp);
			remove ("temp.txt");	// borramos el temporal para no dejar basura por ahi
			break;
		}
		else
		{	
			fputc(ch, original);
		}
	}
	
	if(ciphered==1) printf("\n FICHERO DESCIFRADO "); // si estaba cifrado, ya no lo esta, y viceversa
	if(ciphered==0) printf("\n FICHERO CIFRADO ");	
	Sleep(1000);
	return 0;
}


/* PROCEDURE
OK- convertir el input de char a string y meterle un txt
OK- meter diccionario hardcodeado de hexadecimal		
OK- por cada linea i++ y pasa a otro valor hexadecimal	
OK- aplicar el diccionario al texto						
OK- añade al final del txt un  hex de fichero cifrado 	
OK- machacar el original con el temporal				
OK- limpiar y ordenar el codigo							
OK- eliminar el fichero temporal							
OK- al ejecutar, checa los ultimos 8 caracteres del fichero  	
OK- si no coinciden, cifra el fichero sin pedir interaccion 	
OK- si coinciden es que ya esta cifrado y pide la contraseña 
OK-	al introducir el password no debe aparecer en texto plano en pantalla
OK- cambia el cifrado cada salto de linea, pero para descifrar los saltos de linea no son los mismos
OK- si se falla sale un format C: o lo que sea
OK- si es correcta se descifra el fichero sin pedir mas interaccion de usuario
OK-	intentar unificar las ramas de cifrar y descifrar cambiando el if a delante de ch=ch+hex[i]; o hacer funciones
OK-	limpiar codigo y documentar
	variante sin pass harcodeada, pide pass siempre y la usa como el hex de cifrar o descifrar segun corresponda
*/
