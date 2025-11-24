#include <stdio.h>
int main(){
    int period;
    printf("Enter the period number (1,2,3,4):");
    scanf("%d",period);
    switch (period)
    {
    case 1:
        printf("period 1:Maths\n");
        printf("Time: 9:ooam -10:00am\n");
        break;
    case 2:
        printf("Period 2:Science\n");
        printf("Time: 10:00am -11:00am\n");
        break;
    case 3:
        printf("period 3:Chemistry\n");
        printf("Time 11:00am -12:00am\n");
        break;
    default:
        printf("Invalid period!");
        break;
    }
     return 0;
}
