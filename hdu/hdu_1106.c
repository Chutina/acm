#include<stdio.h>
#include<string.h>
#include<ctype.h>

void insert_sort(long int array[],int length){
    int i,j;
    long int tmp;
    for(i=1;i<length;i++){
        j = i-1;
        tmp = array[i];
        while(j>=0&& array[j]>tmp){
            array[j+1] = array[j];
            j --;
        }
        array[j+1] = tmp;
    }
}

int main(int argc,char *argv[]){
    freopen("data_1106.txt","r",stdin);
	char list[1001];
    char s[10];
    long int result[501];
    int i,n,len,t;
    while(scanf("%s",list)!=EOF){
        len = strlen(list);
        for(i=0,t=0,n=0;i<len;i++){
            if(list[i]!='5'){
                s[t] = list[i];
                t++;
            }else{
                if(t!=0){
                    s[t] = '\0';
                    t = 0;
                    result[n] = atoi(s);
                    n ++;
                }
            }
            if(i==len-1&&t!=0){
                s[t] = '\0';
                result[n] = atoi(s);
                n++;
            }
        }
        insert_sort(result,n);
        for(i=0;i<n;i++){
            if(i==n-1){
                printf("%ld\n",result[i]);
            }else{
                printf("%ld ",result[i]);
            }
        }
    }
    return 0;
}
