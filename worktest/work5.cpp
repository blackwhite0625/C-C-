#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 整數
    int a = 10;  // a的值
    int *ptr;    // 宣告整數指標變數ptr
    ptr = &a;    // 將a的位址設給指標ptr存放
    printf("a=%d, &a=%p\n", a, &a);
    printf("ptr=%p, &ptr=%p, *ptr=%d\n", ptr, &ptr, *ptr);

    *ptr = *ptr + 100;  // 修改a的值
    a = 50;            // 修改a的值

    // 小數
    float b = 3.222;   // b的值
    float *fpt;        // 宣告浮點數指標變數fpt
    fpt = &b;          // 將b的位址設給指標fpt存放
    printf("b=%f, &b=%p\n", b, &b);
    printf("fpt=%p, &fpt=%p, *fpt=%f\n", fpt, &fpt, *fpt);

    // 字元
    char ss[] = "A";  // ss的值
    char *ptcc;       // 宣告字元指標變數ptcc
    ptcc = ss;        // 將ss的位址設給指標ptcc存放
    printf("ss=%s, &ss=%p\n", ss, &ss);
    printf("ptcc=%p, &ptcc=%p, *ptcc=%c\n", ptcc, &ptcc, *ptcc);

    // 字串
    char cc[] = "afewwfdew";  // cc的值
    char *ptss;               // 宣告字元指標變數ptss
    ptss = cc;                // 將cc的位址設給指標ptss存放
    printf("cc=%s, &cc=%p\n", cc, &cc);
    printf("ptss=%p, &ptss=%p, *ptss=%c\n", ptss, &ptss, *ptss);

    const char *password = "sfcsfcsd";
    printf("password=%s, &password=%p\n", password, &password);

    system("pause");
    return 0;
}
