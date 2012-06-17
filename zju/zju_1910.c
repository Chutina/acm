#include <stdio.h>

int main(int argc, char *argv[]) {
    #ifndef ONLINE_JUDGE
    freopen("data_1910.txt","r",stdin);
    #endif
    int c,i,j,k,n,max,sum;
    scanf("%d",&c);
    while (c--) {
        scanf("%d",&n);
        max = 1000000;
        for (i=1;i<11;i++) {
            for (j=1;j<101;j++) {
                for (k=1;k<1001;k++) {
                    if (i*j*k > n) continue;
                    if (i*j*k == n){
                        sum = 2*(i*j + j*k + k*i);
                        max = max > sum ? sum : max;
                    }
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}