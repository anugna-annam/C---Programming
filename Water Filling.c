#include <stdio.h>
int main()
{
int b1,b2,b3,t;
scanf("%d%d%d",&b1,&b2,&b3);
t = (b1 == 0) + (b2 == 0) +( b3 == 0);
if ( t >=2)
{
printf("Water filling time");
}
else
{
printf("Not now");
}
return 0;

}
