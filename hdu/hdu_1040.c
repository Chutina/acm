#include<stdio.h>

void shell_sort(int array[],int length){
    int i,j,inc;
    int tmp;
    for(inc=length/2;inc>0;inc/=2){
        for(i=inc;i<length;i++){
            tmp = array[i];
            for(j=i;j>=inc;j=j-inc){
                if(array[j-inc]>tmp){
                    array[j] = array[j-inc];
                }else{
                    break;
                }
            }
            array[j] = tmp;
        }
    }
}
int main(int argc,char *argv[]){
    freopen("data_1040.txt","r",stdin);
    int t,i,n;
    int s[1001];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&s[i]);
        }
        shell_sort(s,n);
        for(i=0;i<n;i++){
            if(i==n-1){
                printf("%d\n",s[i]);
            }else{
                printf("%d ",s[i]);
            }
        }
    }
    return 0;
}
