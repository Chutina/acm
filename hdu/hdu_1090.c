#include<stdio.h>

int main(){
	freopen("data_1090.txt","r",stdin);
	int a,b,c;
	scanf("%d",&c);
	while(c>0){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
		c--;
	}
	return 0;
}
