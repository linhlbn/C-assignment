#include <stdio.h>

int main()
{
    int i,j;
    for (i=0; i<7; i++) {
        for(j=0;j<7;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    printf("\n");
    
    for (i=0; i<7; i++) {
        if (i%2) printf("  ");
        for(j=0;j<7;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    printf("\n");
    
    for (i=0; i<7; i++) {
        for(j=0;j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    printf("\n");
    
    
    for (i=0; i<7; i++) {
        for(j=0; j<7-i;j++) {
            printf(" ");
        }
        for(j=0; j<i;j++) {
            printf("%c",'*');
        }
        printf("\n");
    }
    printf("\n");
    for (i=0; i<7; i++) {
        for(j=0; j<i;j++) {
            printf(" ");
        }
        for(j=0;j<7;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    printf("\n");
    
    for (i=0; i<7; i++) {
        for(j=0; j<7-i;j++) {
            printf(" ");
        }
        for(j=0;j<i*2+1;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}