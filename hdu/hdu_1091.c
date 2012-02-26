#include<stdio.h>

int main(){
	freopen("data_1091.txt","r",stdin);
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF && !(a==0&& b==0)){
		printf("%d\n",a+b);
	}
	return 0;
}
