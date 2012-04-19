#include <stdio.h>

int main(int argc,char *argv[]){
	int a,b,f=0;
	freopen("data_1095.txt","r",stdin);
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n\n",a+b);
	}
	return 0;
}
