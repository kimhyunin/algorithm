#include <stdio.h>

// int main(void){
//     int i,j,temp, count;
//     int array[10] = {11,10,2,4,3,6,8,5,7,9};
//     int arrayLength = sizeof(array) / sizeof(int);
//     for(i = 0 ;i < arrayLength; i++){
//         count = i;
//         for(j = i; j > -1; j--){
//             if(array[j] > array[count+1]){
//                 temp = array[j];
//                 array[j] = array[count+1];
//                 array[count+1] = temp;
//             }
//             count--;
//         }
//     }
//     for(i=0;i<arrayLength;i++){
//         printf("%d, ", array[i]);
//     }
//     return 0;
// }

int main(void){
    int i,j,temp;
    int array[10] = {1,10,2,4,3,6,8,5,7,9};
    int arrayLength = sizeof(array) / sizeof(int);
    for(i = 0 ;i < arrayLength; i++){
        j = i;
        while(array[j] > array[j+1]){
            temp = array[j];
            array[j]= array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    for(i=0;i<arrayLength;i++){
        printf("%d, ", array[i]);
    }
    return 0;
}


/*for(arraylength i){
    if(arraylength[i] < arraylength[i+1]){
        for(현재번호 부터 0 번까지 --){
            if(arraylenght[i]) < arrayLength[j-1]{
                swap;
                break;
            }
        }
    }
    for(0번부터 )

    01
    //
    12 -> swap
    01
    //
    23 -> swap
    12
    01
    //
    34 -swap


}*/