#include <stdio.h>
#include <unistd.h>   

int main(void)
{

	char letters[] = "abcdefghijklmnopqrstuvwxyz";                                                                                        
        int i = 0;                                                                                                                            
                                                                                                                                              
        while(letters[i] !='\0')                                                                                                              
                {                                                                                                                             
                  putchar(letters[i]);                                                                                                        
                  i++;                                                                                                                        
                }                                                                                                                             
                                                                                                                                              
        putchar('\n'); 
 
    	return (0);

}