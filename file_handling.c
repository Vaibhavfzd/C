#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// #include<math.h>
// typedef struct
// {
//     short level;
//     unsigned flags;
//     char fd;
//     unsigned char hold;
//     short bsize;
//     unsigned char *buffer;
//     unsigned char *curp;
//     unsigned istemp;
//     short token;
// }FILE;

// to read file using fgetc()
// void main()
// {
//     char ch;
//     FILE *fp;
//     fp=fopen("f1.txt","r");
//     if(fp==NULL)
//     {
//         printf("File was not found");
//         exit(1);
//     }
//     while(!feof(fp))
//     {
//         //ch=fgetc(fp);
//         printf("%c",fgetc(fp));
//     }
//     fclose(fp);
// }


// //to write in file using fputc()
// void main()
// {
//     int i; 
//     FILE *fp;
//     char s[100];
//     fp=fopen("f1.txt","w");
//     if(fp==NULL)
//     {
//         printf("File was not found");
//         exit(1);
//     }
//     printf("Enter string: \n");
//     gets(s);
//     for(i=0;i<strlen(s);i++)
//     {
//         fputc(s[i],fp);
//     }
//     fclose(fp);
// }

// to read file using fgets()
// void main()
// {
//     FILE *fp;
//     char s[10];
//     fp=fopen("f1.txt","r");
//     if(fp==NULL)
//     {
//         printf("File was not found");
//         exit(1);
//     }
//     while(fgets(s,8,fp)!=NULL)
//     {
//         printf("%s",s);
//     }
//     fclose(fp);
// }

// // to write in a file using fputs()
// void main()
// {
//     FILE *fp;
//     char s[100];
//     fp=fopen("f1.txt","a");
//     if(fp==NULL)
//     {
//         printf("File was not found");
//         exit(1);
//     }
//     printf("Enter Something:\n");
//     gets(s);
//     fputs(s,fp);
//     fclose(fp);
// }

// to write in a file using fwrite()
struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("f1.txt","ab");
    printf("Enter bookid title and bookprice: \n");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);

}

