#include <stdio.h>

int main(int argc,char *argv[]){
	int i,n,s,t;
	freopen("data_1092.txt","r",stdin);
	while(scanf("%d",&n)!=EOF&&n!=0){
		s = 0;
		for(i=0;i<n;i++){
			scanf("%d",&t);
			s += t; 
		}
		printf("%d\n",s);
	}
	return 0;
}
