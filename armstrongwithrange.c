#include <stdio.h>
#include <math.h>
//Armstrong number
int Arm(int n)
{
  int newnum=n;
  int newnum1=n;
  int m=0;
  while(newnum1!=0)
  {
    newnum1/=10;
    m++;
  }
  int sum=0;
  while(newnum!=0)
  {
    sum+=pow(newnum%10,m);
    newnum/=10;
  }
  if(sum==n)
    return 1;
  return 0;
}
int main()
{
  int m,n;
  scanf("%d%d",&m,&n);
  for(int i=m;i<=n;i++)
  {
    if(Arm(i)==1)
    {
      printf("%d, ",i);
    } 
  } 
}
