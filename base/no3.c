//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    printf("size of char is:%zu\n", sizeof(char));
    printf("size of short is:%zu\n", sizeof(short));
    printf("size of int is:%zu\n", sizeof(int));
    printf("size of short int is:%zu\n", sizeof(short int));
    printf("size of long int is:%zu\n", sizeof(long int));
    printf("size of float is:%zu\n", sizeof(float));
    printf("size of double is:%zu\n", sizeof(double));

    char a[] = {'a','b','c','d','e','f','g'};
    printf("size of a[] is:%zu\n", sizeof(a));

    char b[] = "abcdefg";
    printf("size of b[] is:%zu\n", sizeof(b));

    int i = 0, j = 0;
    char c[][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}};
    for( i=0; i<4; i++ ){
        for(j = 0; j<3; j++){
            printf("%d \t" , c[i][j]);
        }

    }
    printf("\nsize of c is:%zu\n", sizeof(c));
    printf("size of c[0] is:%zu\n", sizeof(c[0]));

    char *p = 0;
    printf("size of char *p is:%zu\n", sizeof(p));


    return 0;
}
