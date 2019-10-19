int index_last_negative(int array[], int count){
    int last_index = 0;
    for(int i = 0; i<count; i++){
        if(array[i]<0){
            last_index=i;
        }
    }
    if(last_index != 0){
        return last_index;
    }
    return -1;
}

