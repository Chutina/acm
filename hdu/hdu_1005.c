#include <stdio.h>
int main(){
    freopen("hdu_1005.txt","r",stdin);
    int a,b,f[50],x,y;
    long n,i;
    while(scanf("%d %d %ld",&a,&b,&n)!=EOF&&a||b||n){
        f[0]=1;f[1]=1;f[2]=1;
        for(i=3;i<50;i++){
            f[i] = (a*f[i-1] + b*f[i-2])%7;
        }
        printf("%d\n",f[n%49]);
    }
    return 0;
}
