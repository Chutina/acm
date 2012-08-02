#include<stdio.h>
#include<math.h>

int main(){
    #ifndef ONLINE_JUDGE
    freopen("data_1242.txt","r",stdin);
    #endif
    double y;
    int w,d,i=1;
    while(scanf("%d %d",&w,&d)!=EOF && w!=0 && d!=0){
        y = log(810.0/d*w)*5730/log(2);
        if(y<10000){
            y = (double)((int)(y/100+0.5))*100;
        }else{
            y = (double)((int)(y/1000+0.5))*1000;
        }
        printf("Sample #%d\n",i);
        printf("The approximate age is %.0lf years.\n\n",y);
        i++;
    }

    return 0;
}
