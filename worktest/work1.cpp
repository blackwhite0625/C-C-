#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "55.h"

//define 定義
#define PI 3.14
#define triArea(he,we) (he)*(we)/2
#define rectArea(xx,yy) (xx)*(yy)

using namespace std;


//第一課
int add2(int);

int main(void){
    int x=2;
    // cout << add2(x) <<endl;
    printf("main x=%d %0x\n",x,&x);
    add2(x);
    system("pause");
    return 0;
}

int add2(int x ){
    x=x+100;
    // cout <<  " sub_add2" << x <<endl;
    printf("add x=%d %0x\n",x,&x);
    return x;
}

//第二課
double area(int r);
int main(void){
    printf("PI=%4.2f,area()=%6.2f\n",PI,area(10));
    cout << PI <<"\t"<< area(10) <<endl;
    system("pause");
    return 0;
}

double area(int r){
    return r*r*PI;
}

