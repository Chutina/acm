#include<stdio.h>

int main(int argc,char *argv[]){
	freopen("data_1097.txt","r",stdin);
	long int a,b,s[4];
	while(scanf("%ld %ld",&a,&b)!=EOF){
		s[1] = a%10;
		s[2] = s[1]*s[1]%10;
		s[3] = s[1]*s[2]%10;
		s[0] = s[1]*s[3]%10;
		printf("%ld\n",s[b%4]);
	}
	return 0;
}
