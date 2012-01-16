#include <stdio.h>
#include <string.h>
#define MAX 1001
int main(){
    freopen("data_1004.txt","r",stdin);
    char store[MAX][16];
    int n,i,j,p,s,sum[MAX];
    while(scanf("%d",&n)!=EOF){
        if(0==n){
            break;
        }
        p = 0;
        memset(&sum,0,sizeof(sum));
        for(i=0;i<n;i++){
            scanf("%s",&store[i]);
            for(j=0;j<i;j++){
                if(0==strcmp(store[i],store[j])){
                    sum[j]= sum[j] + 1;
                    sum[i]= 0;
                    strcpy(store[i],"");
                    break;
                }
            }
            if(j==i){
                sum[i]= 1;
            }
        }
        s = 0;
        p = 0;
        for(i=0;i<n;i++){
            if(sum[i]>s){
                s = sum[i];
                p = i;
            }
        }
        printf("%s\n",store[p]);
    }
    return 0;
}
