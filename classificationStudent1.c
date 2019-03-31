#include <stdio.h>

int main() {
    int point, maxPoint, minPoint, i, level, sum;
    float avg;
    maxPoint = -1;
    minPoint = 11;
    sum = 0;
    for (i = 0; i < 5; i++) {
        point = -1;
        while ((point < 0) || (point > 10)) {
            printf("Sign the %d point: ", i + 1);
            scanf("%d", & point);
        }
        if (point > maxPoint) {
            maxPoint = point;
        }
        if (point < minPoint) {
            minPoint = point;
        }
        sum = sum + point;
    }
    sum = sum - minPoint - maxPoint;
    printf(" What is the difficulty level? ");
    scanf("%d", & level);
    printf("Sum point: %d \n", sum);
    avg = sum / level;
    printf(" and sum after multipling the difficulty level: %f", avg);
    return 0;
}
