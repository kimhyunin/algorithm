#include <stdio.h>

int main(void){
    int i, j,temp;
    int array[10] = {1,10,2,4,3,6,8,5,7,9};

    for(i=0;i<sizeof(array)/sizeof(int);i++){ // 전체확인
        for(j=0;j<sizeof(array)/sizeof(int)-i;j++){ // 마지막 인덱스는 채워졌기 때문에 무시
            if(array[j] > array[j+1]){
                // 스왑
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    // 출력 
    for(i=0;i<sizeof(array)/sizeof(int);i++){
        printf("%d ", array[i]);
    }
}