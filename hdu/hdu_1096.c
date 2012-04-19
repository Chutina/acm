#include <stdio.h>

int main(int argc,char *argv[]){
	int m,n,s,t;
	freopen("data_1096.txt","r",stdin);
	scanf("%d",&n);
	while(n--){
		s = 0;
		scanf("%d",&m);
		while(m--){
			scanf("%d",&t);
			s += t; 
		}
		printf("%d\n",s);
		if(n){
			printf("\n");
		}
	}
	return 0;
}
