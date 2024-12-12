#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main(void){
    char passwd[]={"abcd2"};
    char keyin[10];

    for(int i=0;i<10;i++)
        printf("[%d]=%c %0x \n",i,passwd[i],&passwd[i]);
    do{
        printf("Guess my favorite fruit?");
        fflush(stdout);
        scanf("%10s",keyin);

    }while (strcmp(passwd,keyin));
    printf("[]=%s %0x \n",passwd,&passwd);
    system("pause");
    return 0;
}
