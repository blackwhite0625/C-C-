#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fp; // 宣告指向檔案的指標
    char ch;
    int count=0;

    fp=fopen("/Users/blackwhite/Desktop/vscode/c++/txtt/data.txt","r"); /* 開啟檔案 */
    if(fp!=NULL) /* 如果fopen()的傳回值不為NULL，代表檔案開啟成功 */
    {
    while((ch=getc(fp))!=EOF) /* 判斷是否到達檔尾 */
    {
    printf("%c",ch);
    count++;
    }
    fclose(fp);
    printf("\n總共有%d個字元\n",count);
    }
    else
    printf("檔案開啟失敗!!\n");

    system("pause");
    return 0;
}