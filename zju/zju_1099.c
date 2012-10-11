#include <stdio.h>
#include <string.h>
int main(){
    #ifndef ONLINE_JUDGE
    freopen("data_1099.txt","r",stdin);
    freopen("data_1099.out","w",stdout);
    #endif
    char line[81];
    int n = 0;
    while(scanf("%s",&line)!=EOF){
        if(strcmp(line,"<br>")==0){
            n = 0;
            printf("\n");
        }else if(strcmp(line,"<hr>")==0){
            if(n){
                printf("\n");
            }
            printf("--------------------------------------------------------------------------------\n");
            n = 0;
        }else if(n+strlen(line)<80){
            if(n==0){
                printf("%s",line);
            }else{
                printf(" %s",line);
            }
            n +=strlen(line);
            n += 1;
        }else{
            n = strlen(line);
            printf("\n%s",line);
        }
    }
    return 0;
}
