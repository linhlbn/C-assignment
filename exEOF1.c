#include <stdio.h>

int main(){
    int ret, value, sum = 0, c = 0;
    printf("Reading data from file...\n");
    ret = scanf("%d", &value);
    while(ret!= EOF) { // if we are not at the end
        c++;// count increments
        printf("%5d",value); //print out the value
        if (c%3==0) printf("\n"); // for every 3 numbers
        sum += value;
        ret = scanf("%d", &value);
    } // end of while
    printf("sum = %d\n", sum);
    printf("%d value are read \n", c);
    // end of main

}
