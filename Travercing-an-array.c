#include<stdio.h>


int main(){
    int k,lb[5]={10 , 20 , 30 , 40 ,50};

    k = 0;

    while(k<=4){
        printf("%d \n",lb[k]);
        k=k+1;
    }

    for(k=0;k<=4;k++){
        printf("%d ",lb[k]);
    }

    printf("all array is = %d ",lb[k]);
}