#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(void){
    FILE *fp;
    char num[5][10];
    int var[5],chi[5];
    int j=0;

    //開啟檔案
    fp = fopen("/Users/blackwhite/Desktop/Vs_Github/C/txtt/data.txt","r");

    if(fp == NULL ){
        printf("Files DOES NOT EXISTS!");
    }
    else{
        while(feof(fp)== 0) {
            fscanf(fp,"%s%d%d",&num[j],&var[j],&chi[j]);
            printf("%s %d %d\n",num[j],var[j],chi[j]);
            j++;
            fflush(stdin);
        }
        printf("\n");
        // printf("sss= %d\n",sum);
        fclose(fp);
    }
    system("pause");
    return 0;
    
}
