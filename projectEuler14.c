#include <stdio.h>
int main() {
    // count stands for count for initating chain (start at 1), max stands for the longest chain, n stands for the needed case to be solved, save stands for the number which has the temporary longest chain (also the final result), test is the limit, the current specific case is 1000000
    int count, max = 0, save, test = 1000000;
    long i, n; 
    for (i=1; i<=test; i++) {
        count = 1;
        n = i; // the under code is the process that produces the needed case
        while (n != 1) {
            if (n % 2 == 0) {
                count++;
                n = n / 2;
            } else {
                count++;
                n = 3 * n + 1;
            }
        } // the under code is the process that find the longest chain
        if (count > max) {
            max = count;
            save = i;
        }
    }
    printf("%d",save);
}