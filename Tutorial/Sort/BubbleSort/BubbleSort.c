#include <stdio.h>
#include "Score.h"

int main(void){
    int i, j;
    Score temp;
    
   int length = sizeof(DataSet) / sizeof(DataSet[0]);
   
    for(i=0;i<length;i++){ 
        for(j=0;j<length-i;j++){ 
            if(DataSet[j].score > DataSet[j+1].score){
                temp = DataSet[j];
                DataSet[j] = DataSet[j+1];
                DataSet[j+1] = temp;
            }
        }
    }
    // 출력
    for(i=0;i<100;i++){
        printf("number %d, score : %lf\n",DataSet[i].number, DataSet[i].score);
    }
}