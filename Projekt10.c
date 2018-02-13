#include <stdio.h>
#include <conio.h>

void func1(int a);
int main()
{
int a=50;
func1(a);
printf("a=%d",a);
getche();
return 0;
}
void func1(int a)
{
a=100;
}
