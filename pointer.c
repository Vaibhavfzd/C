
#include<stdio.h>
#include<math.h>
void c();
void main()
{
  float *p, n;
  float i;
  printf("Enter any number: ");
  scanf("%d",&i);
printf("enter element");
 p=(float*)malloc(n*sizeof(float));
 scanf("%d",p);
  printf("%p",sizeof(float));

  c();
}
void c()
{
    float n, m;
    int *p, i;
    printf("\nEnter the value of n and m: ");
    scanf("%f%f",&n,&m);
    p=(float*)calloc(n,m);
    for(i=0;i<n;i++)
    {
        printf("\n%d",(p+i));
    }
}
void main()
{
  char *p;
  int n;
  printf("Enter any number: ");
  scanf("%d",&n);

  p=malloc(n);
  printf("\n%d\n%d",p,sizeof(*p));


}
