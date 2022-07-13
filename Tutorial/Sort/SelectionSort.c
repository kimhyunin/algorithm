#include <stdio.h>

int main(void){
    int i, j, min, index, temp; //min - 최소값, index - 최소값의 위치
    int array[10] = {1,10,2,4,3,6,8,5,7,9};
    for(i=0;i<sizeof(array)/ sizeof(int);i++){
        min = 9999;
        for(j=i;j<sizeof(array)/ sizeof(int);j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] =temp;
    }
    for(i=0;i<sizeof(array)/ sizeof(int);i++){
        printf("%d ",array[i]);
    }
    return 0;
}