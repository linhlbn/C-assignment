#include <stdio.h>
int main() {
    long long int mul, check=0, num=1001;
    while (check!=num) {
        mul = num * num * num;
        check=mul % 10000;
        if (check==num) {
            printf("%lli*%lli*%lli=%lli",num,num,num,mul);
        } else {
            num++;
        }
    }
}