#include <stdio.h>
//this program shows the address of variables 
int main() {
    int a[10] = {10, 9, 8, 7, 6};
    int i;
    int *p;
    p=a;
    printf("address of i = %p\n",&i);
    printf("address of a = %p\n",a);
    puts(""); //make an empty inline
    for(i=0; i<10; i++)
        printf("address of a[%d] = %p (%p)\n",i,&a[i], p++);
    p = a;
    for(i=0; i<10; i++)
        printf("[%d] = %d\n",i,*p++);
}
