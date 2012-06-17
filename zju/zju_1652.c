#include <stdio.h>

int main(int argc, char *argv[]) {
    #ifndef ONLINE_JUDGE
    freopen("data_1652.txt","r",stdin);
    #endif
    int n;
    while (scanf("%d",&n)!=EOF) {
        printf("%d\n",(9*n*n-7*n+2)/2);
    }
    return 0;
}