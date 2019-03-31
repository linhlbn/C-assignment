// make a function which takes the coordiantes of a point
// the function returns the distance from this point to Origin
#include <stdio.h>
// function declaration
float distance(float x, float y);
float max(float, float);
void printRes(float);

int main(){
    float x, y, d, maxd = 0; //maxd will hold the maximum dist
    int ret;
    do {
		ret = scanf("%f%f", &x, &y);
        d = distance(x, y);
        maxd = max(d, maxd);
        printf("distance from (%.2f, %.2f) to Origin is %.2f\n", x, y, d);
    } while (ret!= EOF);
    printRes(maxd);
}
// function definition
float max(float a, float b){
    float res;
    if(a>b) res = a;
    else res = b;
    return res;
}
#include <math.h>
float distance(float x, float y) {
    float result;
    result = x*x + y*y;
    result = sqrt(result);
    return result;
}
void printRes(float maxdis){
	printf("maximum distance is %.2f\n",maxdis);
}
