#include<stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
    freopen("data_1064.txt","r",stdin);
    #endif
    double n,s = 0.0;
    while(scanf("%lf",&n)!=EOF){
        s += n;
    }
    printf("$%.2lf\n",s/12);
    return 0;
}
