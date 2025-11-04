#include<stdio.h>
int main(){
    int n,x,count=0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Nhap a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Nhap so can tim: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    if(count>0){
        printf("So %d xuat hien %d lan trong mang",x,count);
    }else{
        printf("So %d khong xuat hien trong mang");
    }
    return 0;
}