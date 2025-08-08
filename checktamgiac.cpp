#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("cls");
    int a,b,c;
    printf("Nhap lan luot a,b,c:");
    scanf("%d%d%d", &a, &b, &c);

    if (a+b >c && a+c > b && b+c >a) {
        if (a==b && b==c) {
            printf("Day la tam giac can\n");
        }else if (a==b || a==c || b==c) {
            printf("Day là tam giac can\n");
        } else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
            printf("Day la tam giac vuong\n"); 
        } else {
            printf("Day la tam giac thuong\n");
        }
    }else {
        printf("Day khong phai la tam giac\n");
    }

    return 0;
}
