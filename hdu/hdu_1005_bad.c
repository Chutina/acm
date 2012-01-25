#include <stdio.h>
int main(){
    freopen("hdu_1005.txt","r",stdin);
    int a,b,f[50],x,y;
    long n,i;
    while(scanf("%d %d %ld",&a,&b,&n)!=EOF&&a||b||n){
        f[0]=1;f[1]=1;f[2]=1;
        for(i=3;i<(n+3>50?50:n+3);i++){
            f[i] = (a*f[i-1] + b*f[i-2])%7;
            if(1==f[i]&&f[i-1]==1){
                break;
            }
        }
        n = n%(i-2);
        if (n==0){
            n=i-2;
        }
        printf("%d\n",f[n]);
    }
    return 0;
}
