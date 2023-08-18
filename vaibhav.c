#include<stdio.h>
#include<stdlib.h>
// void main()
// {
//     int i, j;
//     printf("Vaibhav jain\n");
//     int a[4][2]={{12,4},{14,7},{16,8},{18,9}};
//     for(i=0;i<=3;i++)
//     {
//         for(j=0;j<=1;j++)
//         {
//             printf("%d\n",*(*(a+i)+j));
//         }
//     }
//     printf("Vaibhav jain\n");
//     for(i=0;i<=3;i++)
//     {
//         for(j=0;j<=1;j++)
//         {
//             printf("%u  %d\n",&a[i][j],a[i][j]);
//         }
//     }
    
// }

// int main()
// {
//     int i;
//      int a[]={0,1,2,3,4};
//     int *p[]={a,a+1,a+2,a+3,a+4};
//     for(i=0;i<=4;i++)
//     printf("%u %u %d\n",p+i,*(p+i),*(*(p+i)));
//     return 0;
// }

#include<string.h>
int xstrlen(char*);
void xstrcpy(char*, const char*);
// void main()
// {
//     int i=0;int j;
//     char *p;
//     char a[]="Vaibhav Jain", b[50], c[50];
//     //p=&a[0];
//     p=a;
//     strcpy(b,a);  // copying string a into b
//     while(*p!='\0')
//     {
//         printf("%c",*(p));
//         p++;
//     }
//     printf("\n%s\n",a);
//     puts(a);
//     puts(b);
//     printf("%d",strlen(a));
//     xstrcpy(c,a);
//     printf("\n%d\n",xstrlen(a));
//     puts(c);
//     strcat(c,a);  // to concatenates two string
//     puts(c);
//    // j=strcmp(c,a);
//     printf("%d",strcmp(a,b));
    
// }

int xstrlen(char *a)
{
    int i=0;
    while(*a!='\0')
    {
        i++;
        a++;
    }
    return i;
}

void xstrcpy(char *c, const char *a)
{
    //*a ='L';  // by writing const in source string we have change it into constant 
    while(*a!='\0')
    {
        *c=*a;a++;c++;
    }
    *c='\0';
}


void main()
{
    int i; 
    char name[6][20];
    char a[20];
    printf("Store names of student:\n");
    for(i=0;i<=5;i++)
    {
        gets(name[i]);
    }
    while(1){
    printf("\ncheck name with stored name:\n");
    scanf("%s",a);
    fflush(stdin);
    for(i=0;i<=5;i++){
    if(strcmp(a,name[i])==0)
    {
        printf("Authentication successful");
        exit(1);
    }
    }
    printf("Authentication Unsuccessful");}
}