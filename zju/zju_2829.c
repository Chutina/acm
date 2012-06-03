#include<stdio.h>

int main(int argc, char* argv[]){
    #ifndef ONLINE_JUDGE
    freopen("data_2829.txt","r",stdin);
    #endif
    unsigned long num;
    int temp[13] = {3,5,6,9,10,12,15,18,20,21,24,25,27};
    while(scanf("%ld",&num)!=EOF){
        if(num % 14 == 0){
            printf("%ld\n",(num/14)*30);
        }else{
            printf("%ld\n",(num/14)*30+temp[(num%14)-1]);
        }
    }
    return 0;
}
