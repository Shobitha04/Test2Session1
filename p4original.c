#include<stdio.h>
int input()
{
  int x;
  printf("enter the term number in the series:\n");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n)
{
  int a,b,k,fib;
  for(a=0, b=1, k=0; k<n; k++)
    {
      if(n==1)
        fib=0;
      else if(n==2)
        fib==1;
      else
      {
        fib = (a+b);
        a=b;
        b=fib;
      }
    }
  return fib;
}

void output(int n,int fibo)
{
  printf("the value of %dth term in the fibonacci series= %d ",n,fibo);
}

int main()
{
  int n=input();
  int fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}