#include <stdio.h>

int sum; main() {
    int a, b, c, sum;
    printf("Tinh diem toan") ;
    scanf("%d", &a);
    printf("Tinh diem van");
    scanf("%d", &b);
    printf("Tinh diem anh");
    scanf("%d", &c);
    sum = a * b + c;
    printf("Diem Tong La: %d", sum);
    printf("Diem tong >42 la do");
    printf("Diem tong <42 la truot");

    return 0;


}