#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,sum;
    float avg;
printf("Enter the integer value:");
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
sum=num1+num2+num3+num4;
avg=(float)sum/3;
printf("\n The summation of four number is=%d",sum);
printf("\n Average of four number is=%.2f",avg);
return 0;
}
