#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch, source_file[] = "S:\\Laberinto del minotauro\\patata.txt";
   char target_file[] = "S:\\Laberinto del minotauro\\patata_BK.txt";
   char target_file2[] = "W:\\Master_BK.txt";
   
   FILE *source, *target, *target2;

   source = fopen(source_file, "r");

   if (source == NULL)
   {
      printf("error en origen...\n");
      exit(EXIT_FAILURE);
   }

   target = fopen(target_file, "w");
   target2 = fopen(target_file2, "w");

   if (target == NULL || target2 == NULL)
   {
      fclose(source);
      printf("error en destino...\n");
      exit(EXIT_FAILURE);
   }

   while ((ch = fgetc(source)) != EOF)
    {
    	fputc(ch, target);	  
	}  
    
	fseek(source, 0, SEEK_SET);  
	
   while ((ch = fgetc(source)) != EOF)
	{
		fputc(ch, target2);
	}
	
   printf("Backup successfull.\n");

   fclose(source);
   fclose(target);
   fclose(target2);

   return 0;
}
