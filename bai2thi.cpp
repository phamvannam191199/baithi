#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    char a[200];
    printf("\n Nhap vao mot doan chuoi: ");
    fflush(stdin);
    gets(a);
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=97&&a[i]<=122)
        a[i]=a[i]-32;
        else if(a[i]>=65&&a[i]<=90)
        a[i]=a[i]+32;
    }
    printf("\n Chuoi sau khi thay doi la %s",a);
    getch();
    return 0;
}
