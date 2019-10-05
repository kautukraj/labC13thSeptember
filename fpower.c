//Fuction for calculating x to the power y
#include<stdio.h>
#include<math.h>
int power(int x,int y)
{
return pow(x,y);
}
void main()
{
int x,y;
printf("Enter the values of x and y : ");
scanf("%d%d",&x, &y);
printf("x to the power y : %i",power(x,y));
}
