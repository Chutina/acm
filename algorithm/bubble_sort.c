//deprecated
void bubble_sort(int array[],int length){
    int i,j;
    int tmp;
    for(i=length;i>0;i--){
        for(j=0;j<i-1;j++){
            if(array[j]>array[j+1]){
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}
