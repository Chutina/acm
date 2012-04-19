#include <stdio.h>

int main(int argc,char *argv[]){
	int n,s,t;
	freopen("data_1094.txt","r",stdin);
	while(scanf("%d",&n)!=EOF){
		s = 0;
		while(n--){
			scanf("%d",&t);
			s += t; 
		}
		printf("%d\n",s);
	}
	return 0;
}
