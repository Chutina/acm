void insert_sort(int array[],int length){
    int i,j;
    int tmp;
    for(i=1;i<=length;i++){
        j = i-1;
        tmp = array[i];
        while(j>=0&& array[j]>tmp){
            array[j+1] = array[j];
			j --;
        }
        array[j+1] = tmp;
    }
}
