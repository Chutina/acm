#include <stdio.h>

int main(int argc, char *argv[]) {
    #ifndef ONLINE_JUDGE
    freopen("data_1367.txt","r",stdin);
    #endif
    int c,n;
    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        if(n<3){
            n = 3;
        }
        if(n%2==0){
            printf("%d\n",(n-4)*n/2+1);
        }else{
            printf("%d\n",(n-3)*n/2);
        }
	}
	return 0;
}
