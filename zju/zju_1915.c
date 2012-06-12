#include <stdio.h>

int main(int argc, char *argv[]) {
    #ifndef ONLINE_JUDGE
    freopen("data_1915.txt","r",stdin);
    #endif
    long int s;
    int c,n,i,gt,people[1001];
    float average;
    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        s = 0;
        i = 0;
        while (i<n) {
            scanf("%d",&people[i]);
            s += people[i];
            i ++;
        }
        i = 0;
        gt = 0;
        average = s*1.0/n;
        while (i<n) {
            if (people[i]>average){
                gt ++;
            }
            i ++;
        }
        printf("%.3f%%\n", gt*1.0/n*100);
    }
    return 0;
}