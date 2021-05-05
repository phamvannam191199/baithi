#include<stdio.h>
#include<conio.h>
int main(){
 int a;
 int sonhapvao;
 int sum=0;
 
    printf("Nhap so bat ki: ");
    scanf("%d",&a);
    for(;a!=0;){
        sonhapvao = a % 10;
        sum += sonhapvao;
        a /= 10;
    }    
    printf("tong cac cua so nhap vao la %d",sum);
}



