#include <stdio.h>
void between100And1(int n);
int main()
{
int num;
printf("Enter any number : ");
scanf("%d", &num);
while(num != -1){
between100And1(num);
printf("\nIf you want to exit enter -1 : ");
scanf("%d",&num);}
return 5;
}
void between100And1(int n)
{
if(n >= 1 && n <= 100)
printf("in the range");
else printf("not in the range");
}