#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void){


struct data{
    char name[10];
    char gender;
    int math;
}

st[2]={{"bird",'M',90},{"sky",'F',78}};

for(int i=0;i<2;i++){
    cout << st[i].name <<endl;
    cout << st[i].gender <<endl;
    cout << st[i].math <<endl;
}

struct data student1;
strcpy(student1.name,"andy");
student1.gender='M';
student1.math=90;

struct data student2={"mary",'F',78};

cout << student1.name <<endl;
cout << student1.gender <<endl;
cout << student1.math <<endl;

cout << student2.name <<endl;
cout << student2.gender <<endl;
cout << student2.math <<endl;

struct data st3;
gets(st3.name);
scanf("%c",&st3.gender);
fflush(stdin);
scanf("%d",&st3.math);
cout << st3.name <<endl;
cout << st3.gender <<endl;
cout << st3.math <<endl;

system("pause");
return 0;
}