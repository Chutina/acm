#include <stdio.h>

int main(){
	double e = 2.5;
	int i, n = 2;
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n");
	printf("1 2\n");
	printf("2 2.5\n");
	for(i=3;i<10;i++){
		n = n*i;
		e = e + 1.0/n;
		printf("%d %.9f\n",i,e);
	}
	return 0;
}
