#include<stdio.h>
int main(){
    int numbers[]={2,4,6,8,10};
    int n;
    int flag=-1;
    printf("Nhap so can tim trong mang(2;4;6;8;10): ");
    scanf("%d",&n);
    int size=sizeof(numbers)/sizeof(int);
    int i;
    for(i=0;i<size;i++){
        if(numbers[i]==n){
            flag=i;
            break;
        }
    }
    if(flag!=-1){
        printf("Phan tu can tim o vi tri %d:",flag);
    }else{
        printf("Phan tu khong ton tai trong mang");
    }
    return 0;
}