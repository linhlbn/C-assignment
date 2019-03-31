// this example reads data.txt without using redirection
#include <stdio.h>

int main(){
    int ret, value, sum = 0;
    FILE * fp; // file hanlder
    fp = fopen("data.txt", "r"); // open the data source file
    ret = fscanf(fp, "%d", &value);
    while (ret != EOF) {
        sum += value;
        ret = fscanf(fp, "%d", &value);
    }
    printf("sum = %d\n",sum);
    fclose(fp);   // and opened file must be closed
}
