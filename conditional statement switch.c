#include<stdio.h>
#include<conio.h>
int main()
{

    int day=0;
    printf("\n Enter a day number =");
    scanf("%d",&day);
    switch(day)
    {
   case 1:
        printf("\n Monday");
        break;
   case 2:
        printf("\n Tuesday");
        break;
   case 3:
        printf("\n Wednseday");
        break;
    case 4:
        printf("\n Thursday");
        break;
    case 5:
        printf("\n Friday");
        break;
    case 6:
        printf("\n Saturday");
        break;
   case 7:
        printf("\n Sunday");
        break;
   default:
    printf("\n Invalid");
}
    getch();
    return 0;
}
