#include<stdio.h>
#include "bubble_sort.c"
#include "select_sort.c"
#include "insert_sort.c"
#include "shell_sort.c"

void print(int array[],int length){
    int i;
    for(i=0;i<length;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(int argc,char *argv[]){
    int list[10] = {9,2,8,1,7,3,6,4,5,0};
    print(list,10);
    bubble_sort(list,10);
    print(list,10);
    return 0;
}
