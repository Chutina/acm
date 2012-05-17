//deprecated
void select_sort(int array[],int length){
    int i,j,p;
    int tmp;
    for(i=0;i<length-1;i++){
        p = i;
        for(j=i+1;j<length;j++){
            if(array[p]>array[j]){
                p = j;
            }
        }
        if(p!=j){
            tmp = array[p];
            array[p] = array[i];
            array[i] = tmp;
        }
    }
}
