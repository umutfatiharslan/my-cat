#include <stdio.h>
#include <stdlib.h>

int main(char argc, char *argv[]){

    FILE *fptr;

    char *buffer;

    buffer = calloc (100, sizeof(char));

    fptr = fopen(argv[1], "r");

    if (fptr == NULL){
        printf("file couldnt be opened");
        return(-1);
    }

    for(int j=0; *buffer != EOF && j<100; j++)
        fscanf(fptr, "%c", &buffer[j]);

    printf("heres the read output:\n");

    for (int i=0; *buffer != EOF && i<100; i++)
        printf("%c", *(buffer+i));



    //fptr = NULL;

    fclose(fptr);


    return 0;
}
