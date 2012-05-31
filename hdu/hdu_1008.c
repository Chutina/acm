#include<stdio.h>

int main(int argc,char *argv[]){
    freopen("data_1008.txt","r",stdin);
    int t,n,r,s;
    while(scanf("%d",&n)&&n!=0){
        r = 0, s = 0;
        while(n--){
            scanf("%d",&t);
            if( (t - r) > 0){
                s = s + (t-r)*6 + 5;
            }else{
                s = s + (r-t)*4 + 5;
            }
            r = t;
        }
        printf("%d\n",s);
    }
    return 0;
}
