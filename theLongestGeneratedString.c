#include <stdio.h>

int main()
{
    long int i, j, k, maxNum;
    int maxStr=0, count;
    for (i=1000000; i<=2000000; i++) {
        j = i;
        k=1;
        count = 0;
        while (j % k == 0) {
            j++;
            k++;
            count++;
        } 
        if (count>maxStr) {
            maxStr = count;
            maxNum=i;
        }
    }
    printf("%li %d",maxNum,maxStr);
}