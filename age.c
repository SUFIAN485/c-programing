#include<stdio.h>
int main()
{
    int age;
    printf("enter your age= ");
    scanf("%d",&age);

    if(age<=140){
        printf("I don't believe this");
    }
    if(age<= 80 && age <140){
        printf("he is very old.");
    }
    if(age<=60 && age<80){
        printf("he is old.");
    }
    if(age>=20 && age<60){
        printf("he is young.");
    }

return 0;
}
