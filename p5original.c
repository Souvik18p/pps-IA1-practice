#include<stdio.h>

float input()
{
    float n;
    printf("Enter the number =\n");
    scanf("%f",&n);
    return n;
}

float sq_root(float n)
{
    float temp,sq;
    sq=n/2;
    temp=0;
    while(sq !=temp)
    {
        temp=sq;
        sq=(n/temp+temp)/2;
    }
    return sq;
}

void output(float n,float sq)
{
    printf("Square root of %f is %f\n",n,sq);
}

int main()
{
    float n,temp,sq;
    n=input();
    temp=sq_root(n);
    sq=sq_root(n);
    output(n,sq);
    return 0;
}