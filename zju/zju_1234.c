#include<stdio.h>
#include <string.h>
#include <limits.h>

#define MIN(a,b) (a)<(b)?(a):(b)

int main(int argc, char *argv[]){
    int t,k,n,i,j,seed;
    int l[5001];
    int dp[2][5001];
    #ifndef ONLINE_JUDGE
    freopen("P2.IN","r",stdin);
    #endif
    scanf("%d",&t);
    while(t--){
        memset(l,0,sizeof(l));
        memset(dp,0,sizeof(dp));

        scanf("%d %d",&k,&n);
        for(i=1;i<=n;i++){
            scanf("%d",&l[i]);
        }
        k +=8;
        for(i=1;i<=k;i++){
            for(j=i*2;j<=n;j++){
                seed = l[j] - l[j-1];
                if(j>i*2){
                    dp[i%2][j] = dp[i%2][j-1];
                }else{
                    dp[i%2][j] = INT_MAX;
                }
                if(j<n-3*(k-i)){
                    dp[i%2][j] = MIN(dp[(i-1)%2][j-2] + seed*seed,dp[i%2][j]);
                }
            }
        }
        printf("%d\n",dp[k%2][n]);
    }
    return 0;
}
