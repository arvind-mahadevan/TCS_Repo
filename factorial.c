#include <stdio.h>
#include <math.h>
//Factorial
int Fact(int n)
{
  if(n==0||n==1)
  {
    return 1;
  }
  else
  {
    return n*Fact(n-1);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",Fact(n));
}
