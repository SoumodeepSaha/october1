#include<stdio.h>
void main ()
{
int a,b,c;
printf ("enter age of three person");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
printf ("oldest=%d",a);
else if (b>a && b>c)
printf ("oldest=%d",b);
else
printf("oldest=%d",c);
}
