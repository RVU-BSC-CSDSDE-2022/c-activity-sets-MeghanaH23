#include <stdio.h>
int input();
int add(int a,int b);
void output(int a,int b,int sum);

int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
}

int input()
{
int n;
printf("Enter a no.");
scanf("%d",&n);
return n;
}

int add(int a,int b)
{
  int sum=a+b;
  return sum;
}

void output(int a,int b,int sum)
{
 printf("The sum of numbers %d+",a); 
 printf("%d",b);
 printf(" is %d", sum);
}