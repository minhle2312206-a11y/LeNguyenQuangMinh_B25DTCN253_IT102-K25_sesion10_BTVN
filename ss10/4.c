#include<stdio.h>
int main(){
    int numbers[5]={64,25,12,22,11};
    int arrSize=sizeof(numbers)/sizeof(int);
    printf("Mang chua sap xep:");
    for(int i=0;i<arrSize;i++){
        printf("%d ",numbers[i]);
    }
    for(int i=0;i<arrSize;i++){
        for(int j=0;j<arrSize-1-i;j++){
            if(numbers[j+1]<numbers[j]){
                int temp=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
            }
        }
    }
    printf("\nMang da sap xep:");
    for(int i=0;i<arrSize;i++){
        printf("%d ",numbers[i]);
    }
    return 0;
}