#include <stdio.h>
// the program will be given a number, and the program finds all its divisors
int main () {
    int num, divisors[100] = {0}, c, i;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    while(num <= 0) {
        printf("positive please: ");
        scanf("%d",&num);
    }
    for(c=0, i=1; i<=num; i++) {
        if (num%i==0) {
            divisors[c++] = i; //c++ la gan' r moi cong, ++c la cong roi moi gan'
            printf("%d. %d\n", c, divisors[c-1]);
        }
    }
    printf("There are %d divisors of %d.\n", c, num);
    return 0;
}
