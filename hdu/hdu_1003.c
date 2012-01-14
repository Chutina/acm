#include <stdio.h>
#define MAX_N 100001
int main(){
	freopen("data_1003.txt","r",stdin);
	int t,n,m[MAX_N];
	int i,j,l,r,p,s,max,tmp;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d",&m[j]);
		}
		l = r = p = tmp = 0;
		max = -2000;
		for(j=0;j<n;j++){
			tmp += m[j];
			if(tmp>max){
				max = tmp;
				r = j;
				l = p;
			}
			if(tmp<0){
				tmp = 0;
				p = j+1;
			}
		}
		printf("Case %d:\n",i);
		printf("%d %d %d\n",max,l+1,r+1);
		if(i<t){
			printf("\n");
		}
	}
	return 0;
}
