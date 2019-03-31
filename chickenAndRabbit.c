// this program shows 2 versions of function which solves 
// chicken-rabbit problem
#include <stdio.h>
int ch_ra_v1(int H, int L);
void ch_ra_v2(int H, int L, int*C, int *R);
int main(){
	int rabbits, chickens, heads, legs;
	printf("Input heads: ");
	scanf("%d", &heads);
	printf("Input legs: ");
	scanf("%d", &legs);
	chickens = ch_ra_v1(heads, legs);
	printf("No. C = %d, No. R = %d\n", chickens, heads-chickens);
	
	ch_ra_v2(heads, legs, &chickens, &rabbits);
	printf("No. C = %d, No. R = %d\n", chickens, rabbits);
}

// function definition
int ch_ra_v1(int H, int L){
	int c;
	for(c=0; c<=H; c++){
		if(c*2+(H-c)*4 == L) break;
	}
	return c;
}

void ch_ra_v2(int H, int L, int*C, int *R){
	int c;
	for(c=0; c<=H; c++){
		if(c*2 + (H-c)*4 == L) break;
	}
	*C = c;
	*R = H-c;
}