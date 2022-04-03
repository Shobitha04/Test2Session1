#include<stdio.h>

int input_number()
{
  int x;
  printf("enter the value:\n");
  scanf("%d",&x);
  return x;
}

int is_prime(int n)
{
  for (int i=2;i<=n/2;i++)
    {
      if(n%i==0)
        return 1;
      }
   return 0;
}

void output(int n,int is_prime)
{
  if (is_prime==0)
  printf("%d is a prime number",n);
  else
    printf("%d is not a prime number",n);
}

int main()
{
  int n=input_number();
  int prime=is_prime(n);
  output(n,prime);
  return 0;
}