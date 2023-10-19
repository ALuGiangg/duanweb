#include <stdio.h>
 int main()
 {
    int a, b;
    printf("Nhap vao a: ");
    scanf("%d", &a);
    printf("Nhap vao b: ");
    scanf("%d", &b);
    if(a>b)
    {
        printf("%d la so lon nhat!",a);
    }
    else if (b>a)
    {
        printf("%d la so lon nhat ", b);
    }
    return 0;
 }