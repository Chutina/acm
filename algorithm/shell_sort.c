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
