#include<stdio.h>

int main(){

    int pos,value,j,i,arr[100],n;

    printf("enter the size of Array = ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    printf("\nEnter The value and position");
    scanf("%d %d",&value,&pos);

    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]= value;

    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}