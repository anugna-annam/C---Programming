#include<stdio.h>
int main()
{
 int n,f,1,s;
 scanf("%d",&n);
 1 = n % 10;
 f = n;
 while (f >= 10)
   {
     f =f / 10;
   }
  s = f + 1;
  printf("%d",s);
  return 0;
}
