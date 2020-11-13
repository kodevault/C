#include <stdio.h> 
#include <string.h>
  
int main() 
{ 
  //  FILE *fp; 
  //  fp = fopen("temp.txt", "r"); 
   // int	pos;

    FILE* f = fopen("target.txt", "r");
    fseek(f, -8, SEEK_END);
    char buf[8];
	int check; 
	char done[9] = {'5', '2', '4', '1', '5', '6', '4', '5'};
    memset(buf, 0, 10);
    fread(buf, 1, 9, f);
    
    check=strcmp(buf,done);
    printf("%i culo \n", check);
    if(check==0)
    	{printf("%s tetas \n", buf);
		}
    printf("%s\n", buf);

	  
 /*   // Moving pointer to end 
    fseek(fp, -8, SEEK_END); 
    pos=ftell(fp);
    printf("%i es la posision", pos);   
    // Printing position of pointer 
    printf("%ld", ftell(fp)); 
  
  
    return 0; */
} 
