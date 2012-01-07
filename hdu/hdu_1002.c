#include <stdio.h>
#include <string.h>

int main(){
    int a[1001],b[1001];
    char astr[10001], bstr[1001];
    int la, lb, i, j, n, left;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        printf("Case %d:\n",j);
        scanf("%s %s",astr,bstr);
        printf("%s + %s = ",astr,bstr);
        la = strlen(astr);
        lb = strlen(bstr);
        for(i=la-1,left=0;i>=0;i--){
            a[left++] = astr[i] - '0';
        }
        for(i=lb-1,left=0;i>=0;i--){
            b[left++] = bstr[i] - '0';
        }
        for(i=0,left=0;i<1001;i++){
            a[i] = a[i] + b[i] + left;
            left = a[i]/10;
            a[i] = a[i]%10;
        }
        for(i=1000;i>=0;i--)  
            if(a[i]) break;
        for(;i>=0;i--){
            printf("%d",a[i]);
        }
        printf("\n");
        if(j<n){
            printf("\n");
        }
    }
    return 0;
}

