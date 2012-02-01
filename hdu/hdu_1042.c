#include <stdio.h>
#define MAX_N 10001
int main(int argc,char *argv[]){
	int i,j,n,k,p,s[MAX_N]={1};
	freopen("data_1042.txt","r",stdin);
	while(scanf("%d",&n)!=EOF){
		s[0]=1;
		k = 0;
		for(i=1;i<=n;i++){
			p = 0;
			for(j=0;j<=k;j++){
				s[j] = s[j]*i + p;
				p = s[j]/10000;
				s[j] = s[j]%10000;
			}
			if(p){
				k++;
				s[k] = p;
			}
		}
		printf("%d",s[k]);
		for(i=k-1;i>=0;i--){
			printf("%04d",s[i]);
		}
		printf("\n");
	}
	return 0;
}
