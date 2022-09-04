/*
#include <stdio.h>
#include<math.h>
int main()
{
    int num;  // variable declaration
    int count=0;  // variable declaration
    printf("Enter a number");
    scanf("%d",&num);
   count=(num==0)?1:log10(num)+1;
   printf("Number of digits in an integer is : %d",count);
   return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int num;  // variable declaration
    int count=0;  // variable declaration
    printf("Enter a number");
    scanf("%d",&num);
   count=func(num);
   printf("Number of digits is : %d", count);
   return 0;
}
int func(int n)
{
    static int counter=0; // variable declaration
  if(n>0)
  {
      counter=counter+1;
      return func(n/10);
  }
    else
    return counter;
}
*//*
#include<stdio.h>  
#include <stdlib.h>
int main(){  
 
int x,y,sum=0,temp;    

printf("enter the number=");    

scanf("%d",&x);    

temp=x;    

while(x>0)    

{    

y=x%10;    

sum=sum+(y*y*y);    

x=x/10;    

}    

if(temp==sum)    

printf("armstrong number ");    

else    

printf("not armstrong number");    

return 0;  

}   
*/
#include <stdio.h>
int main() {
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%11d", &n);

  // iterate at least once, then until n becomes 0
  // remove last digit from n in each iteration
  // increase count by 1 in each iteration
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}
