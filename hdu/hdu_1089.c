#include <stdio.h>
int main(int argc,char *argv[]){
	freopen("data_1089.txt","r",stdin);
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n",a+b);
	}
	return 0;
}
