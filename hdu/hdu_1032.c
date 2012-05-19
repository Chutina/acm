#include<stdio.h>

long int t(long int n){
    long int t = 1;
    while(n!=1){
        if(n%2==1){
            n = 3*n +1;
        }else{
            n = n/2;
        }
        t++;
    };
    return t;
}

int main(int argc,char *argv[]){
    freopen("data_1032.txt","r",stdin);
    long int a,b,i,j,m=0,c;
    while(scanf("%d %d",&a,&b)!=EOF){
        m = 0;
        if(a>b){
            i = b;
            j = a;
        }else{
            i = a;
            j = b;
        }
        for(;i<=j;i++){
            c = t(i);
            if(c>m){
                m = c;
            }
        }
        printf("%ld %ld %ld\n",a,b,m);
    };
    return 0;
}
