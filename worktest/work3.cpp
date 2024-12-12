#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void){
    int A[5]={32,15,55,28,42};

int MAX = 0,x=0;
for(int i=0 ; i<5;i++){
    x = A[i];
    if(x > MAX)
        MAX = x;
    }
cout << "MAX = "<< MAX <<endl;

    system("pause");
    return 0;
}     