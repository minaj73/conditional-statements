#include<stdio.h>
#include<conio.h>
int main()
{

    int age,gender;
    printf("\n Enter age and gender");
    scanf("%d%d",&age,&gender);
    if(age>=65)
    {
        if(gender=='m')
        {
        printf("\n you are eligible for senior citizen criteria");
        }
    }
    else
    {
        if(age>=60)
        {
            if(gender=='f')
            {
        printf("\n you are eligible for senior citizen criteria");
            }
        else
            printf("\n not eligible");
        }
    }
    getch();
    return 0;

}
