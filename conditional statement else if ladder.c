#include<stdio.h>
#include<conio.h>
int main()
{

    int Day_Num=0;
    printf("\n Enter a day number");
    scanf("%d",&Day_Num);
    if(Day_Num==1)
    {
        printf("\n Monday");
    }
    else if(Day_Num==2)
    {
        printf("\n Tuesday");
    }
    else if(Day_Num==3)
    {
        printf("\n Wednseday");
    }
    else if(Day_Num==4)
    {
        printf("\n Thursday");
    }
    else if(Day_Num==5)
    {
        printf("\n Friday");
    }
    else if(Day_Num==6)
    {
        printf("\n Saturday");
    }
    else if(Day_Num==7)
    {
        printf("\n Sunday");
    }
    else
    {
        printf("\n Invalid");;
    }
    getch();
    return 0;

}
