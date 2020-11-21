#include <stdio.h>                                                             
#include <stdlib.h>                                                            

int main()                                                                     
{                                                                              
    int a;                                                                     
    char buf[BUFSIZ];                                                          

    printf("Please enter a number:\n");                                      
    scanf("%d",&a);                                                            
    printf("Your number is: %d\n",a);                                          
    snprintf(buf, sizeof(buf), "echo %d",a);                                   
    system(buf);                                                               
}  
