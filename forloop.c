#include<stdio.h>
//wirte a program  to print all ascii value and their equlavelent character using a loop the aascii value vary from 0 to 255

int main()
{

    int A;
    for(A=0;A<=255;A++)
    {

        printf("the ascii code of %c is %d\n ",A,A);
    }
    return 0;
}
