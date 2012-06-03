#include<stdio.h>

int main(int argc, char* argv[]){
    #ifndef ONLINE_JUDGE
        freopen("data_2185.txt","r",stdin);
    #endif
    long int n,s,i;
    while(scanf("%ld",&n)!=EOF){
        s = 0; i=1;
        while((s+i)<n){
            s += i;
            i++;
        }
        if( i%2 == 0){
            printf("TERM %ld IS %ld/%ld\n",n,n-s,i+1-(n-s));
        }else{
            printf("TERM %ld IS %ld/%ld\n",n,i+1-(n-s),n-s);
        }
    }
    return 0;
}
