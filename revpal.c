#include <stdio.h>
#include <math.h>
//Reversing a number and check for palindrome
int main()
{
  int n,rev,n2;
  scanf("%d",&n);
  n2=n;
  rev=0;
  while(n!=0)
  {
    int d=n%10;
    n=n/10;
    rev=(rev*10)+d;
  }
  printf("%d\n",rev);
  if(rev==n2)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not a Palindrome");
  }
}
