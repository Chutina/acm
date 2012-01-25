#include <stdio.h>
int main(){
    freopen("hdu_1005.txt","r",stdin);
    int a,b;
    long int i,x,y,z,n;
    while(scanf("%d %d %ld",&a,&b,&n)!=EOF){
        if(0==a&&0==b&&0==n){
            break;
        }
        x=1, y=1, z=1;
        for(i=3;i<=n;i++){
            z = (a*y + b*x)%7;
            x = y;
            y = z;
            //printf("t:%ld %d\n",z,i);
        }
        printf("%ld\n",z);
    }


    return 0;
}
