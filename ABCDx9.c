// find out solution of ABCD x 9 = DCBA
#include <stdio.h>
/* function definition */
int rev4(int);
int rev(int v, int d);
int main() {
    int i;
    for(i=1000; i<=9999; ++i) {
        if(i*9 == rev4(i))
            printf("%d * 9 = %d\n", i, rev4(i));
    }
    for(1000000; i<=9999999; i++){
        if(i*9 == rev(i, 7))
            printf("%d * 9 = %d\n", i, rev(i, 7));
    }
}

int rev(int v, int d){
    int result = 0, i, mul=1, dd;
    for(i=0; i<d; i++) mul *= 10;
    for(i=0; i<d; i++) {
        dd = v % 10;
        v = v/10;
        result += dd*mul;
        mul = mul/10;        
    }
    return result;
}
/* function definition */
int rev4(int v){
    int result = 0, i, mul=1000, d;
    for(i=0; i<4; i++) {
        d = v % 10;
        v = v/10;
        result += d*mul;
        mul = mul/10;        
    }
    return result;
}