int sum_between_negative(int array[], int count){
    int first_neg = index_first_negative(array, count);
    int last_neg = index_last_negative(array, count);
    int sum = 0;
    if (first_neg!=-1 || last_neg!=-1) {
    for(int i = first_neg; i<last_neg; i++){
        sum += abs(array[i]);
    }
    return sum;
    };
}
