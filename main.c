#include <stdio.h>

int main(void) 
{
    int input_num, i, j, k;
    printf("Jumlah angka : ");scanf("%d",&input_num);
    int arr_num[input_num];
    
    // input array
    
    for( i = 0; i < input_num; i++ ) {
        scanf("%d\n",&arr_num[i]);
    }
    
    // sort number
    
    for( i = 0; i < input_num; i++ ) {
        for( j = i + 1; j < input_num; j++ ) {
            if( arr_num[i] > arr_num[j] ) {
                k = arr_num[i];
                arr_num[i] = arr_num[j];
                arr_num[j] = k;
            }
        }
    }
    
    for( i = 0; i < input_num; i++ ) {
        printf("%d ",arr_num[i]);
    }
    
    // average
    for( i = 0; i < input_num; i++ ) {
        for( j = 0; i < input_num; i++ ) {
            k = arr_num[i] + arr_num[i + 1];
        }
    }
    
    k = k / input_num;
    printf("rata2 nya adalah : %d",k);
}
