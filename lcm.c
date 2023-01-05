#include<stdio.h>
int main(void)
{
    int n1,n2,min,hcf,lcm;
    printf("enter number n1 =");
    scanf("%i", &n1);
    printf("enter number n2 =");
    scanf("%i", &n2);
if(n1>n2)
{
    min = n1;
}
else
{
    min = n2;
}
for(int i = 1; i<=min; i++)
{
if(n1%i == 0 && n2%i == 0)
{
    hcf = i;
}
}
lcm = (n1*n2)/hcf;
printf("%i \n", hcf);
printf("%i", lcm);
}
