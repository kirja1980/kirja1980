int sum_before_and_after_negative(int array[], int count){
    int first_neg = index_first_negative(array, count);
    int last_neg = index_last_negative(array, count);
    int sum = 0;
    if (first_neg!=-1 || last_neg!=-1) {
    for(int i = 0; i< first_neg; i++){
        sum += abs(array[i]);
    }
    for(int i = last_neg; i<count; i++){
        sum += abs(array[i]);
    }
    };
    return sum;
}

