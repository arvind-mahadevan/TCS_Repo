#include <stdio.h>
#include <math.h>
//Power of a number
int Power(int m,int n)
{
 if(n==0)
 {
   return 1;
 }
 else
 {
  return m*Power(m,n-1); 
 }
}
int main()
{
  int m,n;
  scanf("%d%d",&m,&n);
  printf("%d",Power(m,n)); 
}
