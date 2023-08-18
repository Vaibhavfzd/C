
#include <stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
   int rev;
   if(x<0 || (x%10==0 && x!=0))
   {return 0;}
   while(x>rev)
   {
       rev=rev*10+x%10;
       x=x/10;
   }
   return x==rev || x==rev/10;
}

void main(){
    if(isPalindrome(121)==1)
    printf("true");
    else
    printf("false");
}