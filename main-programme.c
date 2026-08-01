#include <stdio.h>
#include <stdlib.h>
int main(char argc, char *argv[]){

    FILE *fptr;

    int *buffer, buffer_internal[10 * sizeof(char)], buffer_size=0;

    buffer = calloc(0, sizeof(char));

    buffer_size = 0;

    fptr = fopen(argv[1], "r");

    printf("file content:\n");
    
    for( int x_tenth=0 ; ; x_tenth++ ){     // x_tenth : how many ten times (second buffer size) have the loop worked, in other words, 

        for (int i=0; fscanf(fptr, "%c", &buffer_internal[i]) != EOF && i<10 ; i++) ;

        int *realloc_check = realloc(buffer, buffer_size + 10 * sizeof(char) );
    
        if (realloc_check != NULL){

            buffer_size = buffer_size + 10 * sizeof(char) ;
            

            for(int j=0 + x_tenth*10; j<x_tenth*10 + 10 && buffer_internal[j] != EOF ; j++){
                *(buffer + x_tenth*10+ j) = buffer_internal[x_tenth*10 + j];
                printf("%c", *(buffer + x_tenth*10 + j));
            }
        }
    }


    fclose(fptr);

    fptr = NULL;

    return 0;
}
