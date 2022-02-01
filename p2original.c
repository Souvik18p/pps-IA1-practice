#include<stdio.h>

int input()
{
  int a;
  printf("Enter the number =\n");
  scanf("%d",&a);
  return a;
}

int compare(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if((b>c)&&(b>a))
  return b;
  else
  return c;
}

int output(int big)
{
  printf("Big number is = %d\n",big);
}

int main()
{
  int x,y,z,big;
  x=input();
  y=input();
  z=input();
  big=compare(x,y,z);
  output(big);
  return 0;
}