#include<stdio.h>
int main()
{
int a,b,x,y;
int m,r;
scanf("%d%d%d%d",&a,&b,&x,&y);
m = (2 * a ) + b;
r = (2 * x) + y;
if ( m > r)
{
printf("Messi");
}
else if (m < r)
{
printf("Ronaldo");
}
else
{
printf("Equal");
}
return 0;
