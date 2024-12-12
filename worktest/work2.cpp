#include <stdio.h>
#include <stdlib.h>
using namespace std;

int add(int arr[]);

int main(void){
    int x[]={5};
    printf("main 1 x=%x : %x x[0]=%d \n",x,&x,x[0]);
    printf("相加: %d\n",add(x));

    printf("main 2 x=%x : %x\n",x,&x);
    system("pause");
    return 0;

}
int add (int arr[]){
    arr[0]=arr[0]+100;
    printf("add() arr=%x : %x\n",arr,&arr);
    // return arr;
}