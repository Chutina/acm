#include <stdio.h>

int main(int argc, char *argv[]) {
    #ifndef ONLINE_JUDGE
    freopen("data_2060.txt","r",stdin);
    #endif
    int long n;
    while(scanf("%ld",&n)!=EOF){
        if(n%8 == 2 || n%8 == 6 ){
            printf("yes\n");
        }else{
            printf("no\n");
        }
	}
	return 0;
}