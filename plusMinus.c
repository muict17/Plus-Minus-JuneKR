void plusMinus(int arr_count, int* arr) {
    //count of arr 
    float posCount = 0;
    float nevCount = 0;
    float zeroCount = 0;
    for(int i = 0; i< arr_count;i++){
        if(arr[i] < 0){
            nevCount+=1;
        }
        else if (arr[i]>0) {
            posCount++;
        }
        else {
            zeroCount++;
        }
    }
    posCount /= arr_count;
    nevCount /= arr_count;
    zeroCount /= arr_count;
    printf("%f \n",posCount);
    printf("%f \n",nevCount);
    printf("%f \n",zeroCount);
    // printf("%.f \n%.f\n%.f \n",posCount,nevCount,zeroCount);
}