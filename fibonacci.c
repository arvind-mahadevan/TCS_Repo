#include <stdio.h>
//Fibonacci series printed
int Fibo(int n)
{
  if(n==0||n==1)
    return n;
  else
    return Fibo(n-1)+Fibo(n-2);
}
int main(void){
  int n;
  scanf("%d",&n);
  for(int i=0;i<=n;i++)
    printf("%d, ",Fibo(i));
}
