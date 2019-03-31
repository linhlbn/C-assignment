#include <stdio.h>

#include <stdlib.h>

int main() {
    int age;
    float bc, w, h;
    char sex;
    printf("what is your age?\n");
    scanf("%d", & age);
    printf("what is your weight?\n");
    scanf("%f", & w);
    printf("what is your height?\n");
    scanf("%f", & h);
    while ((sex != 'M') || (sex != 'F')) {
        printf("what is your gender?\n");
        scanf("%c", & sex);
        if (sex == 'M') {
            bc = 66 + (13.7 * w) + (5 * h) - (6.8 * age);
            printf("Male with bc = %f", bc);
            break;
        } else if (sex == 'F') {
            bc = 655 + (9.6 * w) + (1.8 * h) - (4.7 * age);
            printf("Female with bc = %f", bc);
            break;
        }
    }
    return 0;
}