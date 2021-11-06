#include<stdio.h>
#include<conio.h>
int main()
{

    float budget=0.0;
    printf("\n enter budget =");
    scanf("%f",&budget);
    if(budget>1000)
    {
        printf("\n welcome to showroom");

    }
    else
    {
        printf("\n minimum budget required is 1000");
    }
    printf("thanks for visiting");
    getch();
    return 0;
}
