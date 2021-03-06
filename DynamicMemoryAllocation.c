/*  
"malloc()"->memory allocation 
"calloc()"->continuous allocation 
"free()"-> it is use to totally free memory 
"realloc()"->re-allocation memory
*/

# include <stdio.h>

int main(int argc, char const *argv[]){

    int *ptr;
    
    ptr = (int *) malloc(5 * sizeof(int));  // (5 * sizeof(int)) is number or size in bytes
                                            // now we can use the ponter as array
    ptr = (int *) calloc(5,sizeof(int));    //malloc store garbage value as default but calloc store 0 as  default value

    ptr = realloc(ptr, 5);

    free(ptr); // free this memory 




    return 0;
}
