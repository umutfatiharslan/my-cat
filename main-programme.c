#include <stdio.h>

int main(){

    FILE *fptr;

    printf("please enter a valid directory: ");

    for (int i=NULL; (i = getchar()) != EOF; ){


    }

    fptr = fopen(i, "r");

    fclose(fptr);

    fptr = NULL;


    return 0;

}
